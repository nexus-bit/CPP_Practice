//주석처리 ctrl AKC 해제 AKU
#include<iostream>
using namespace std;

void hw(int a[][5], int b){
	a[3][2] = 1; //배열은 콜바이 레퍼런스라서 원래배열의 값이바뀜
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