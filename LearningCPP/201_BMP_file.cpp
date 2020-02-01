///*
//	�� ���α׷���8bit gray-scale ������ �Է����λ���Ͽ������� �� ���� ������ �������������Ѵ�
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<Windows.h>	//window api���� �����ϴ� BMP������ ����ü�� ���� ���� window��� �ҷ���
//
//#define WIDTH(byte) (((byte)+3)/4*4) //�����Ϳ��� w(��|�ʺ�)�� 4�� ������� �� ex> 1,2,3,4 -> 4 / 5,6,7,8 -> 8
//
//int main(int argc, char* argv[]) {	//���� : ���� ����
//	//���� ����
//	FILE* file;	//FILE����ü�� ������ ����(bmp�����͸� FILE�κ��� �б�/�����ϱ�)
//	BITMAPFILEHEADER hf;	//���������� ����ü�� ����
//	BITMAPINFOHEADER hInfo;	//���������� ����ü�� ����
//	RGBQUAD rgb[256];	//LUT�� �����ϱ� ���� ���� (gray-scale BMP�� LUT�� �ʿ� ������ ���������� ä�� �־�� ��)
//	int widthStep;	//�� ��� ����Ʈ(byte per line)
//	BYTE* lpImg;	//�Է� �����͸� �����ϴ� ������ ���� -> BYTE�ڷ��� : unsigned char(8bit)
//	BYTE* lpOutImg;	//��� �����͸� �����ϴ� ������ ���� -> 1���� �������̰� ���� ũ�⸦ �𸣱⿡ �����ͷ� ����
//					//���߿� ��� �����͸� �а� �̸� ���� �������� �޸𸮸� �Ҵ��ų �����̴�.
//	int x, y;	//��ǥ�� ��Ÿ��
//
//	//����� ���� : 3���� ������ ���� X : ��, �Է����ϰ� ��������� �־����߸� ������
//	if (argc < 3) {
//		printf("Insufficient Input Arguments \n");
//		printf("  invertImageinput_fileouput_file\n");
//		return -1;
//	}
//
//	//�Է� ���� ���� ����
//	file = fopen(argv[1], "rb");	//�ι�° ����� ���ڰ� �Է� ���� ���� ������ -> �� ������ ��� �����͸� �ҷ���
//									//�����ʹ� binary data(text X) -> ReadBinary -> rb
//									//�̸� �о file�������� ���� 
//
//	//������ �ִ°�? - ���� ��� ó��
//	if (file == NULL) {	//file������ NULL�̴�(������ �������� �ʴ´�) -> ����ó��
//		printf("�̹��� ������ �� �� �����ϴ�! \n");
//		return-1;
//	}
//
//	//���������� ���� ������ ������ ���(���) ���������� ���, LUT, �̹����� �о����
//	//1. ���� ����� ���� ��ġ�ϹǷ� ���� ����
//	fread(&hf, sizeof(BITMAPFILEHEADER), 1, file); //fread��� �Լ��� ���� ���� ����� binary�������� �о��
//	/*	fread�Լ��� ����?
//		&hf : ����ü ����(������ ����)
//		sizeof(BITMAPFILEHEADER) : �о�� �������� ũ��(���⼭�� fileheader����ü�� ũ�⸸ŭ)
//		1 : �о�� Ƚ��(���⼱ �ѹ� �аڴ�)
//		file : ��𼭺��� �о�� ������(���⼱ file�����ͷκ��� �аڴ�)
//	*/
//	//BMP������ �´°�? - �ƴѰ�� ó��
//	if (hf.bfType != 0x4D42) { // BMP ���� 4D42�� �´��� Ȯ��
//		printf("BMP ������ �ƴմϴ�. \n");
//		return-1;
//	}
//	//2. �� ������ bmp ����� ����
//	fread(&hInfo, sizeof(BITMAPINFOHEADER), 1, file);	//���� ��� ������ ���������� fread�Լ��� ���� ��Ʈ�� ����� ����
//
//	//������ �о�Դ��� �߰����� �� ���
//	printf("Size: (%3dx%3d) \n", hInfo.biWidth, hInfo.biHeight);	//�� ó�� ���α��̿� ���α��� ��°���
//
//	// 8bit gray-scale �����ΰ�? - ���°�� ó��
//	if (hInfo.biBitCount != 8 || hInfo.biClrUsed != 0) { //��Ʈ ���������� �Ǵ�X
//		//���ȼ��� ��Ʈ���� 8��Ʈ and LUT�� ���� ������ 0�ΰ�?
//		printf("8bit gray-scale ������ �ƴմϴ�..!! \n");
//		return-1;
//	}
//
//	//3. �� ������ LUT(lookup table) ����
//	fread(rgb, sizeof(RGBQUAD), 256, file);	//3���� ������ ���� 256��ŭ �о��
//
//	//�Է� �����͸� ���� ��(row)�� ����Ʈ �� ���
//	widthStep = WIDTH((hInfo.biBitCount / 8) * hInfo.biWidth);
//	/* �� �ȼ��� ��Ʈ ��(bicount) / 8(����Ʈ ��) * w(�� ����) */
//
//	//�̹��� �������� ���� ��ġ�� ã��
//	fseek(file, hf.bfOffBits, SEEK_SET); //offbit��� �ʵ带 ���� �̹��� �������� ���� ��ġ�� �� �� �ִ�
//	/*	fseek�Լ� - �̹��� �������� ��ġ�� �̵�~!
//	:	file : ������ �̸�, �̹��� �������� ��ġ�� ǥ���Ұ���
//		offbit : file�� 5�� �ʵ� �� ������ �ʵ���
//		Seekset : �ʵ�(����)�� ó�� ���� ������ �������� ����	*/
//
//		//�̹��� �����͸� �����ϱ� ���� ������ ���� �Ҵ� ����(�����Ͷ�)
//	lpImg = (BYTE*)malloc(widthStep * hInfo.biHeight);	//�̹��� ũ���� w*h��ŭ �Ҵ�(Ȥ�� ��Ʈ������� �ʵ带 ��)
//	/* malloc�� ��ȯ���� void�� ������ ����ϱ� ���� byte������ ��ȯ�Ѵ� */
//
//	//4. ������ ���� ���� �Ҵ� �������ٰ� �̹����� ����
//	fread(lpImg, sizeof(BYTE), widthStep * hInfo.biHeight, file);
//	/*	�����Ҵ� �޸𸮿��ٰ� ����, byte ũ��(1)��ŭ, ������ ������ŭ(��������Ʈ�� * ���α���),  file ������ ��ġ����
//		fread(lpImg, widthStep * hInfo.biHeight, 1, file); �� ����
//		����Ʈ ������ ������ �д��� �̹��� ũ��� �ѹ��� �д��� �� ������ ��
//	*/
//	fclose(file);	//�Է� ���Ϸ� ������ �бⰡ ���� -> �ݱ�
//
//	//������ ���� - �о� �� �̹����� ���ϴ� ����� ó���ϴ� ����
//	//1. ��� �����͸� �����ϱ� ���� ���� �Ҵ� ���� ����
//	lpOutImg = (BYTE*)malloc(widthStep * hInfo.biHeight);
//
//	//2. ������ �ȼ��� ���� ó��
//	for (y = 0; y < hInfo.biHeight; y++) {
//		for (x = 0; x < hInfo.biWidth; x++) {
//			lpOutImg[y * widthStep + x] = 255 - lpImg[y * widthStep + x];	//255���� ������ ���� ���� ���� ex)0->255
//		}	//�̸� �Է� ������ ��� �ȼ��� ���� ó���� �ϸ� ������(2���� for��)
//	}
//
//	//3. ���ϸ� ����, 2�� �������� ����� �� �ְ� ���� ����
//	file = fopen(argv[2], "wb");	//write binary
//
//	//�Է� ���󿡼� �о�� ���� ��� �״�� ����(���� ������� �ٲ������� ���� �x����)
//	fwrite(&hf, sizeof(char), sizeof(BITMAPFILEHEADER), file);	//1. ������� ����
//	/* fwrite : ������ ����, �ѹ��� ������ �������� ũ��, Ƚ��, ���� ������ */
//	fwrite(&hInfo, sizeof(char), sizeof(BITMAPINFOHEADER), file);	//2. ��Ʈ��������� ����
//	fwrite(rgb, sizeof(RGBQUAD), 256, file);	//3. LUT���� ����
//
//	fseek(file, hf.bfOffBits, SEEK_SET);	//4. fseek�Լ��� ���� �������ִ°����� �̵�
//	fwrite(lpOutImg, sizeof(BYTE), widthStep * hInfo.biHeight, file);	//5. ��� �̹��� ����
//
//	fclose(file);	//������ ���� ���� -> �ݱ�
//
//	free(lpOutImg); free(lpImg);	//���� �Ҵ� �޸� ����
//	return 0;
//}
///*
//	Ʈ���÷� �̹����ϰ��
//	if( (hInfo.biBitCount!=8 || hInfo.biClrUsed!=0) && hInfo.biBitCount!=24)
//	8��Ʈ �ܿ� Ʈ���÷� 24��Ʈ �߰�
//
//	if( hInfo.biBitCount== 8 )
//	������̺��� 8��Ʈ gray scale�� ��쿡�� ����
//
//	if(   hInfo.biBitCount== 24 ) {
//		for( y=0; y<hInfo.biHeight; y++ ) {
//			for( x=0; x<hInfo.biWidth; x++ ) {
//				lpOutImg[y*widthStep+3*x+2] = 255-lpImg[y*widthStep+3*x+2];
//				lpOutImg[y * widthStep + 3 * x + 1] = 255 - lpImg[y * widthStep + 3 * x + 1];
//				lpOutImg[y * widthStep + 3 * x + 0] = 255 - lpImg[y * widthStep + 3 * x + 0];
//				 -> ���� 3�� �̵�
//	R,G,B������ ���� ó��
//*/
