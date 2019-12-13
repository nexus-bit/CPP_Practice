//20191210  PT9_13p ����� �ݺ��Ǵ°�� ���� �Լ� ȣ��
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

	//virtual�� �� ��� : ���� ���ε��� ���� GrandŬ������ �Լ��� ���� �����
	//virtual ������ : �� �Լ��� �ѹ��� �״�� �����
}