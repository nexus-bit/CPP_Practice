//20191205 PT8_33p 중첩 상속 시(조부모) 접근지정, 144~146보다 중요
#include<iostream>
using namespace std;

class Base {
private:
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	//외부에서 Base의 모든 멤버를 private로 간주
	//Derived에서는 Base의 protected 까지 접근 가능
	//Derived의 자식(Base의 손자)은 Base의 모든 멤버를 private로 간주
private:
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(5);	//protected 상태의 setA(int a) 함수에 접근 가능
		showA();	//public 상태의 showA() 함수에 접근 가능
		cout << b;
	}
};

class GrandDerived : private Derived {
	//외부에서 상위 클래스들의 모든 멤버를 private로 간주
	//GrandDerived에서는 상위 클래스들의 protected 까지 접근 가능
private:
	int c;
protected:
	void setAB(int x) {
		setA(x);	//★손자는 할아버지의 protected에 접근 불가(자식만 가능)
		showA();	//★손자는 할아버지의 protected에 접근 불가(자식만 가능)
		setB(x);	//자식은 부모의 protected에 접근 가능
	}
};

int main() {
	cout << "프로그램 작동" << endl;
}