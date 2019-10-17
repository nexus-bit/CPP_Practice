//과제 - 20191017 PT_random 랜덤 함수의 응용
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() {

	srand((unsigned int)time(NULL));
	float arr[52][52] = { 0 }; //배열은 여유롭게 만들어 둠, 50*50까지 가능

	cout << "랜덤수를 만들 배열의 크기(i, j)를 입력하세요" << endl;
	cout << "최대 50행50열까지 가능하지만 화면에 다 출력하기 힘들 수 있습니다.\nrow col >> ";
	int row, col;
	cin >> row >> col;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			arr[i][j] = rand() % 5 + 1; //row, col크기의 배열에 랜덤함수로 숫자생성

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			arr[row][j] += arr[i][j]; //[row,j]에 가로합 저장, 배열은 0부터 시작하므로 row+1이 붙지 않음
			arr[i][col] += arr[i][j]; //[i,col]에 서로합 저장
			arr[row][col] += arr[i][j];  //[row,col]에 대각선합 저장
		}

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++) {
			arr[i][col + 1] = arr[i][col] / col; //[row+1,j]에 가로합을 통해 평균 저장, 배열은 0부터 시작하므로 row+2가 아님
			arr[row + 1][j] = arr[row][j] / row;
		}

	for (int i = 0; i < row + 2; i++) {
		for (int j = 0; j < col + 2; j++) { //[row, col의 크기 + 누적합 공간 1 + 평균 공간 1 ]씩 증가한 row+2
			cout << arr[i][j] << "	";
		}
		puts("\n");
	}
}
