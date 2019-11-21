//20191121 오류 확인, sum(), cal()함수 처리, 오류해결 프로그램
#include<iostream>
using namespace std;

/*개념*/
//int add(int a, int b = 5, int c = 4) { //기본 매개변수는 오른쪽부터 가져야 함
//	return a + b;
//}
//
//int main() {
//	cout << add(10) << endl;
//	cout << add(10, 20) <<endl;
//	cout << add(10, 20, 30) <<endl;
//}

void calc(int a=0, int b=0, int c=0, int d=0) { //에러 발생, 기본 매개변수 전부 추가
	cout << a + b + c + d << endl;
}

void sum(int a, int b=1, int c=1) { //에러 발생, 기본 매개변수 끝부분 추가
	int result = 0;
	for (int i = 0; i <= a; i++)
		result += i;
	for (int i = 0; i <= b; i++)
		result += i;
	for (int i = 0; i <= c; i++)
		result += i;
	cout << result << endl;
}

int main() {
	calc();
	calc(1, 2, 3);
	calc(10, 20, 30, 40);
	sum(1); //기본 매개변수가 있는 부분은 생략 가능
	sum(2, 2, 2);
	sum(2, 3, 3);
}