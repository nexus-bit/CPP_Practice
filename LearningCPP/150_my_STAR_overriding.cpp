//�Լ� �����ǿ� �������̵��� ��(PT09����)
#include<iostream>
using namespace std;

////�Լ� ������ - f()�� ������ ��ȸ�� �־���
class Base {
public:
	void f() {
		cout << "Base::f() called" << endl;
	}
};

class Derived : public Base {
public:
	void f() {	//�Ȱ��� �Լ�? > �Լ� ������!
		cout << "Derived::f() called" << endl;
	}
};

//�������̵�(�ö�Ÿ��) - �θ��� x()�� ���ô���
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
	
	//�׻� �ڽ��� x()�� ����
	Berived b, *abj;
	abj = &b;
	abj->x();

	Berived dd;
	dd.x();
}