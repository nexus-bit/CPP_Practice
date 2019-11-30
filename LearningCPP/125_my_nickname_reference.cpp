//참조 변수(reference) - 별명(겁나쉬움)
#include<iostream>
using namespace std;

class Circle {
public:
	void getRadius(){}
};

int main() {
	int name = 2;
	int newnum = 100;
	int& NAME = name;	//&&&&&&
	NAME = newnum;	//별명 = 수, 별명 = 변수 가능
	cout << name;

	int* p = &NAME;	//별명으로 포인터 쓰기
	*p = 999;
	cout << '\n' << *p << " " << name << " " << NAME;

	Circle CD2;
	Circle& myCD = CD2;	//별명은 새로운 공간을 할당하지 않음.
	myCD.getRadius();	//주소가 아니라서 '->' 쓰면 안됨
}