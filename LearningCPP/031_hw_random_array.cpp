////���� - 20191017 PT_random ���� �Լ��� ����
//#include<iostream>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//	float arr[52][52] = { 0 }; //�迭�� �����Ӱ� ����� ��, 50*50���� ����
//
//	cout << "�������� ���� �迭�� ũ��(i, j)�� �Է��ϼ���" << endl;
//	cout << "�ִ� 50��50������ ���������� ȭ�鿡 �� ����ϱ� ���� �� �ֽ��ϴ�.\nrow col >> ";
//	int row, col;
//	cin >> row >> col;
//
//	for (int i = 0; i < row; i++)
//		for (int j = 0; j < col; j++)
//			arr[i][j] = rand() % 5 + 1; //row, colũ���� �迭�� �����Լ��� ���ڻ���
//
//	for (int i = 0; i < row; i++)
//		for (int j = 0; j < col; j++)
//		{
//			arr[row][j] += arr[i][j]; //[row,j]�� ������ ����, �迭�� 0���� �����ϹǷ� row+1�� ���� ����
//			arr[i][col] += arr[i][j]; //[i,col]�� ������ ����
//			arr[row][col] += arr[i][j];  //[row,col]�� �밢���� ����
//		}
//
//	for (int i = 0; i < row; i++)
//		for (int j = 0; j < col; j++) {
//			arr[i][col + 1] = arr[i][col] / col; //[row+1,j]�� �������� ���� ��� ����, �迭�� 0���� �����ϹǷ� row+2�� �ƴ�
//			arr[row + 1][j] = arr[row][j] / row;
//		}
//
//	for (int i = 0; i < row + 2; i++) {
//		for (int j = 0; j < col + 2; j++) { //[row, col�� ũ�� + ������ ���� 1 + ��� ���� 1 ]�� ������ row+2
//			cout << arr[i][j] << "	";
//		}
//		puts("\n");
//	}
//}