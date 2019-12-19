//함수 재정의와 오버라이딩의 비교(PT09참고)
#include<iostream>
using namespace std;

////함수 재정의 - f()는 동등한 기회가 주어짐
class Base {
public:
	void f() {
		cout << "Base::f() called" << endl;
	}
};

class Derived : public Base {
public:
	void f() {	//똑같은 함수? > 함수 재정의!
		cout << "Derived::f() called" << endl;
	}
};

//오버라이딩(올라타기) - 부모의 x()는 무시당함
class Aase {
public:
	virtual void x() {
		cout << "Aase::x() called" << endl;
	}
};

class Berived : public Aase {
public:
	virtual void x() {
		cout << "Berived::x() called" << endl;
	}
};

int main() {
	Derived d, *obj;
	obj = &d;
	obj->f();
	
	//항상 자식의 x()가 실행
	Berived b, *abj;
	abj = &b;
	abj->x();

	Berived dd;
	dd.x();
}