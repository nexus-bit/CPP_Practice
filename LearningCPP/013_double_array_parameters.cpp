//�ּ�ó�� ctrl AKC ���� AKU
#include<iostream>
using namespace std;

void hw(int a[][5], int b){
	a[3][2] = 1; //�迭�� �ݹ��� ���۷����� �����迭�� ���̹ٲ�
}

int main()
{
	int n = 20;
	int arr[4][5] = { 0 };
	arr[1][2] = 4;
	hw(arr, n);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j];
		puts("");
	}
}