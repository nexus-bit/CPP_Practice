//20191210  PT9_13p 상속이 반복되는경우 가상 함수 호출
#include<iostream>
using namespace std;

class Base {
public:
	virtual void func() { cout << "Base::func() called" << endl; }
};

class Derived : public Base {
public:
	void func() { cout << "Derived::func() called" << endl; }
};

class Grand : public Derived {
public:
	void func() { cout << "Grand::func() called" << endl; }
};

int main() {
	Grand g;
	Base* bp;
	Derived* dp;
	Grand* gp;

	bp = dp = gp = &g;

	bp->func();
	dp->func();
	gp->func();

	//virtual을 쓸 경우 : 동적 바인딩을 인해 Grand클래스의 함수만 세번 실행됨
	//virtual 생략시 : 각 함수가 한번씩 그대로 실행됨
}