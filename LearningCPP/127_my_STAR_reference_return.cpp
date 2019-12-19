//참조 리턴 : 값, 포인터 객체 외에도 참조(별명)를 리턴할 수 있음
#include<iostream>
using namespace std;

//char dat = 'd';
//
//char& ret() {	//c의 별명 생성기
//	return dat;
//}
//
//int main() {
//	char a = ret();
//	cout << "a : " << a << endl;	//변수 a는 dat의 별명의 값이 들어감
//
//	a = 'a';
//	cout << "a의 값 바꾼 후 dat : " << dat << endl;	//a의 값을 바꾸어도 dat는 상관하지 않음
//
//	char &ref = ret();	//별명 ref는 dat의 별명이 됨
//	cout << "ref : "<< ref << endl;	//별명 ref 출력시 dat의 값이 출력됨
//
//	ref = 'r';
//	cout << "ref값을 바꾼 후 dat : " << dat << endl;	//dat의 별명 ref의 값을 바꾸면 원래의 dat이 바뀜
//	
//	find() = 'f';	//find함수를 통해 직접 dat의 값을 바꿈
//	cout << "find를 통해 직접 dat의 값을 바꾼 후 그의 별명 ref의 값 : " << ref << endl;
//}

char& find(char arr[], int index) {
	return arr[index];	//arr[i] 공간의 참조(별명) 리턴
	//간단히 생각하면, find함수는 arr[i]의 별명 을 준다
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S';	//find를 통해 name의 0번 자리의 값을 직접 S로 바꿈
	cout << name << endl;

	char& ref = find(name, 2);	//별명 ref는 name의 2번 자리의 별명이 됨
	ref = 'T';	//별명의 값을 바꿈
	cout << name << endl;	//원래의 값도 바뀜
}