//20191031 PT4_19p
#include<iostream>
using namespace std;

int main() {
	cout << "입력할 학생의 갯수는 몇 자루입니까?>>";
	int n;
	cin >> n;

	int* p = new int[8]; //★1차원 배열의 동적 할당 방법★

	int** arr = new int * [5]; //★2차원 배열의 동적 할당 방법★
	for (int i = 0; i < 5; i++)//5과목씩 n명
		arr[i] = new int[n];

	if (!arr) {
		cout << "메모리 할당 실패"; return 0;
	}
	
	for (int i = 0; i < n; i++) { //숫자 입력과 계산
		cout << i+1 << ": 학번, 자바, c++ 점수를 순서대로 입력하세요.\n>>";
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		arr[i][3] = arr[i][1] + arr[i][2];
		arr[i][4] = arr[i][3] / 2;
	}

	cout << "학번	자바	c++	총합	평균\n";
	for (int i = 0; i < n; i++) { //숫자 출력
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << "	";
		}
		puts("");
	}
	delete[] p;//★메모리 반환★
	delete[] *arr;//★메모리 반환★
}
