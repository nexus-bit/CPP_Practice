//20191120 정수, 실수, 배열을 사용하여 함수오버로딩 적용하여 최대, 최소값 출력

//함수 중복 - 매개 변수에 따라 생성자 여려개 생성하는것(생성자 중복)과 같은 원리
//같은 이름의 함수지만 매개 변수의 종류, 갯수에 따라 다르게 만들 수 있다
//소멸자는 중복 불가(매개변수가 없기 때문)
#include<iostream>
using namespace std;

double big(double a, double b) { //둘중큰실수
	if (a > b)return a;
	else return b;
}

int big(int a, int b) { //둘중큰정수
	if (a > b)return a;
	else return b;
}

int big(int a[], int size) { //배열에서가장큰수
	int biggest = 0;
	for (int i = 0; i < size; i++)
		if(a[i] > biggest)
			biggest = a[i];
	return biggest;
}

int main() {
	int array[10] = { 1, 9, 55, -8, -74, 100, 0, -9, 6, -108 };
	cout << big(3.75, 5.12) << endl;
	cout << big(9, 8) << endl;
	cout << big(array, 10);
}