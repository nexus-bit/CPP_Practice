//20191120 1~100 사이의 범위 값을 입력받아 합을 구하는 함수중복 프로그램 만들어 보기
/*조건
	1)해당 범위를 넘어서는 경우 오류 처리
	2) 2개의 정수입력시: 예(5,80): 5+ .... + 80까지의 합
	3) 1개의 정수 입력시
		-51이상 : 예(77): 77+...+100까지의 합
		-50이하 : 예(33): 1+...+33까지의 합	*/
#include<iostream>
#include <string>
using namespace std;

int sum(int a, int b) {
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}

int sum(int a) {
	int s = 0;
	if (a <= 50)
		for (int i = 0; i <= a; i++)
			s += i;
	else if (a > 50)
		for (int i = a; i <= 100; i++)
			s += i;
	return s;
}

int main() {
	string input("");
	int spacecount = 0; //공백 수 계산
	int spacelocation = 0;
	cout << "1~100사이의 수 하나 혹은 두개 입력 >";
	getline(cin, input, '\n');

	for (int i = 0; i < input.length() + 1; i++) {
		if ((input[i] == ' ')) { //공백 발견시
			spacecount += 1; //공백의 갯수 카운트
			spacelocation = i; //공백의 위치 저장
		}
	}

	if (spacecount == 0) { //공백 없이 숫자 하나
		string sub = input.substr(0, input.length());
		int num = stoi(sub);
		if (num > 100 || num < 1) //1~100까지의 수가 아닐 경우
			cout << "1~100까지의 수가 아닙니다";
		else if (num < 50)
			cout << "1부터 " << num << "까지의 합은 " << sum(num);
		else if (num >= 50)
			cout << num << "부터 " << "100까지의 합은 " << sum(num);
	}

	else if (spacecount == 1) { //공백 하나, 숫자 두개
		string sub1(input.substr(0, spacelocation));
		string sub2(input.substr(spacelocation));
		int num1 = stoi(sub1);
		int num2 = stoi(sub2);
		if (num1 > 100 || num1 < 1 || num2 > 100 || num2 < 1) //1~100까지의 수가 아닐 경우
			cout << "1~100까지의 수가 아닙니다";
		else
			cout << num1 << "부터 " << num2 << "까지의 합은 " << sum(num1, num2);
	}

	else { //공백 너무 많아서 에러 표출
		cout << "공백이 2개 이상입니다.";
	}
}