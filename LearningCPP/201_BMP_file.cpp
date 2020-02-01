///*
//	이 프로그램은8bit gray-scale 영상을 입력으로사용하여반전한 후 동일 포맷의 영상으로저장한다
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<Windows.h>	//window api에서 지원하는 BMP파일의 구조체를 쓰기 위해 window헤더 불러옴
//
//#define WIDTH(byte) (((byte)+3)/4*4) //데이터에서 w(행|너비)는 4의 배수여야 함 ex> 1,2,3,4 -> 4 / 5,6,7,8 -> 8
//
//int main(int argc, char* argv[]) {	//질문 : 힘수 인자
//	//변수 선언
//	FILE* file;	//FILE구조체의 포인터 변수(bmp데이터를 FILE로부터 읽기/저장하기)
//	BITMAPFILEHEADER hf;	//마찬가지로 구조체의 변수
//	BITMAPINFOHEADER hInfo;	//마찬가지로 구조체의 변수
//	RGBQUAD rgb[256];	//LUT를 저장하기 위한 변수 (gray-scale BMP는 LUT가 필요 없지만 형식적으로 채워 넣어야 함)
//	int widthStep;	//한 행당 바이트(byte per line)
//	BYTE* lpImg;	//입력 데이터를 저장하는 포인터 변수 -> BYTE자료형 : unsigned char(8bit)
//	BYTE* lpOutImg;	//출력 데이터를 저장하는 포인터 변수 -> 1차원 데이터이고 아직 크기를 모르기에 포인터로 선언
//					//나중에 헤더 데이터를 읽고 이를 보고 동적으로 메모리를 할당시킬 예정이다.
//	int x, y;	//좌표를 나타냄
//
//	//명령행 인자 : 3보다 작으면 동작 X : 즉, 입력파일과 결과파일이 주어져야만 동작함
//	if (argc < 3) {
//		printf("Insufficient Input Arguments \n");
//		printf("  invertImageinput_fileouput_file\n");
//		return -1;
//	}
//
//	//입력 영상 파일 열기
//	file = fopen(argv[1], "rb");	//두번째 명령행 인자가 입력 파일 명을 포함함 -> 그 파일을 열어서 데이터를 불러옴
//									//데이터는 binary data(text X) -> ReadBinary -> rb
//									//이를 읽어서 file변수에다 저장 
//
//	//파일이 있는가? - 없는 경우 처리
//	if (file == NULL) {	//file변수가 NULL이다(파일이 존재하지 않는다) -> 에러처리
//		printf("이미지 파일을 열 수 없습니다! \n");
//		return-1;
//	}
//
//	//정상적으로 영상 파일을 열었을 경우(계속) 순사적으로 헤더, LUT, 이미지를 읽어오기
//	//1. 파일 헤더가 먼저 위치하므로 먼저 읽음
//	fread(&hf, sizeof(BITMAPFILEHEADER), 1, file); //fread라는 함수를 통해 파일 헤더를 binary형식으로 읽어옴
//	/*	fread함수의 인자?
//		&hf : 구조체 변수(저장할 공간)
//		sizeof(BITMAPFILEHEADER) : 읽어올 데이터의 크기(여기서는 fileheader구조체의 크기만큼)
//		1 : 읽어올 횟수(여기선 한번 읽겠다)
//		file : 어디서부터 읽어올 것인지(여기선 file포인터로부터 읽겠다)
//	*/
//	//BMP파일이 맞는가? - 아닌경우 처리
//	if (hf.bfType != 0x4D42) { // BMP 포맷 4D42가 맞는지 확인
//		printf("BMP 파일이 아닙니다. \n");
//		return-1;
//	}
//	//2. 그 다음엔 bmp 헤더를 읽음
//	fread(&hInfo, sizeof(BITMAPINFOHEADER), 1, file);	//파일 헤더 열떄랑 마찬가지로 fread함수를 통해 비트맵 헤더를 읽음
//
//	//실제로 읽어왔는지 중간점검 및 출력
//	printf("Size: (%3dx%3d) \n", hInfo.biWidth, hInfo.biHeight);	//옆 처럼 가로길이와 세로길이 출력가능
//
//	// 8bit gray-scale 영상인가? - 없는경우 처리
//	if (hInfo.biBitCount != 8 || hInfo.biClrUsed != 0) { //비트 수만가지고 판단X
//		//↑픽셀당 비트수가 8비트 and LUT의 행의 갯수가 0인가?
//		printf("8bit gray-scale 영상이 아닙니다..!! \n");
//		return-1;
//	}
//
//	//3. 그 다음엔 LUT(lookup table) 읽음
//	fread(rgb, sizeof(RGBQUAD), 256, file);	//3가지 색상읜 갯수 256만큼 읽어옴
//
//	//입력 데이터를 위한 행(row)당 바이트 수 계산
//	widthStep = WIDTH((hInfo.biBitCount / 8) * hInfo.biWidth);
//	/* 한 픽셀당 비트 수(bicount) / 8(바이트 수) * w(한 라인) */
//
//	//이미지 데이터의 시작 위치를 찾기
//	fseek(file, hf.bfOffBits, SEEK_SET); //offbit라는 필드를 통해 이미지 데이터의 시작 위치를 알 수 있다
//	/*	fseek함수 - 이미지 데이터의 위치로 이동~!
//	:	file : 포인터 이름, 이미지 데이터의 위치를 표현할것임
//		offbit : file의 5개 필드 중 마지막 필드의
//		Seekset : 필드(파일)의 처음 시작 지점을 기준으로 잡음	*/
//
//		//이미지 데이터를 저장하기 위한 공간의 동적 할당 생성(포인터라서)
//	lpImg = (BYTE*)malloc(widthStep * hInfo.biHeight);	//이미지 크기인 w*h만큼 할당(혹은 비트맵헤더의 필드를 씀)
//	/* malloc은 반환형이 void기 때문에 사용하기 위해 byte형으로 변환한다 */
//
//	//4. 위에서 만든 동적 할당 공간에다가 이미지를 읽음
//	fread(lpImg, sizeof(BYTE), widthStep * hInfo.biHeight, file);
//	/*	동적할당 메모리에다가 저장, byte 크기(1)만큼, 데이터 갯수만큼(한행당바이트수 * 세로길이),  file 포인터 위치부터
//		fread(lpImg, widthStep * hInfo.biHeight, 1, file); 과 같음
//		바이트 단위로 여러번 읽느냐 이미지 크기로 한번에 읽느냐 그 차이일 뿐
//	*/
//	fclose(file);	//입력 파일로 데이터 읽기가 끝남 -> 닫기
//
//	//마지막 과정 - 읽어 온 이미지를 원하는 결과로 처리하는 과정
//	//1. 결과 데이터를 저장하기 위한 동적 할당 공간 생성
//	lpOutImg = (BYTE*)malloc(widthStep * hInfo.biHeight);
//
//	//2. 각각의 픽셀을 반전 처리
//	for (y = 0; y < hInfo.biHeight; y++) {
//		for (x = 0; x < hInfo.biWidth; x++) {
//			lpOutImg[y * widthStep + x] = 255 - lpImg[y * widthStep + x];	//255에서 원색을 뺴면 반전 성공 ex)0->255
//		}	//이를 입력 영상의 모든 픽셀에 대해 처리를 하면 오케이(2차원 for문)
//	}
//
//	//3. 파일명 지정, 2진 형식으로 사용할 수 있게 파일 오픈
//	file = fopen(argv[2], "wb");	//write binary
//
//	//입력 영상에서 읽어온 파일 헤더 그대로 저장(파일 헤더에서 바뀐정보가 없기 땨문에)
//	fwrite(&hf, sizeof(char), sizeof(BITMAPFILEHEADER), file);	//1. 파일헤더 저장
//	/* fwrite : 저장할 변수, 한번에 저장할 데이터의 크기, 횟수, 파일 포인터 */
//	fwrite(&hInfo, sizeof(char), sizeof(BITMAPINFOHEADER), file);	//2. 비트맵정보헤더 저장
//	fwrite(rgb, sizeof(RGBQUAD), 256, file);	//3. LUT정보 저장
//
//	fseek(file, hf.bfOffBits, SEEK_SET);	//4. fseek함수를 통해 데이터있는곳으로 이동
//	fwrite(lpOutImg, sizeof(BYTE), widthStep * hInfo.biHeight, file);	//5. 결과 이미지 저장
//
//	fclose(file);	//데이터 쓰기 끝남 -> 닫기
//
//	free(lpOutImg); free(lpImg);	//동적 할당 메모리 해제
//	return 0;
//}
///*
//	트루컬러 이미지일경우
//	if( (hInfo.biBitCount!=8 || hInfo.biClrUsed!=0) && hInfo.biBitCount!=24)
//	8비트 외에 트루컬러 24비트 추가
//
//	if( hInfo.biBitCount== 8 )
//	룩업테이블은 8비트 gray scale의 경우에만 읽음
//
//	if(   hInfo.biBitCount== 24 ) {
//		for( y=0; y<hInfo.biHeight; y++ ) {
//			for( x=0; x<hInfo.biWidth; x++ ) {
//				lpOutImg[y*widthStep+3*x+2] = 255-lpImg[y*widthStep+3*x+2];
//				lpOutImg[y * widthStep + 3 * x + 1] = 255 - lpImg[y * widthStep + 3 * x + 1];
//				lpOutImg[y * widthStep + 3 * x + 0] = 255 - lpImg[y * widthStep + 3 * x + 0];
//				 -> 주의 3씩 이동
//	R,G,B각각에 대한 처리
//*/
