//20191205 PT8_31p 상속 시 접근지정 : private
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
private:
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;	//Derive 기준의 객체 생성
	x.a = 5;	//main함수에서 A클래스의 private인 멤버 a 접근 X	-> 원래 private였던 것은 상속 접근 지정을 바꾸어도 접근 불가
	x.setA(7);	//main함수에서 A클래스의 private인 setB() 접근 X	-> protected가 상속 접근 지정을 통해 private가 됨 -> 원래 protected 였던 것은 상속 접근 지정을 바꾸어도 접근 불가
	x.showA();	//main함수에서 A클래스의 private인 showA() 접근 X	-> public이 상속 접근 지정을 통해 private가 됨 -> 상속 시 :public base로 바꾸면 됨
	x.b = 10;	//main함수에서 B클래스의 private인 멤버 b 접근 X	-> 메인 함수에서 private에 접근 절대 불가
	x.setB(10);	//main함수에서 B클래스의 protected인 setB() 접근 X	-> 메인 함수에서 protected에 접근 불가 -> protected는 자식만 접근 가능
	x.showB();	//main함수에서 B클래스의 public인 showB() 접근 가능	-> 메인 함수를 포함해서 외부 어디든 public은 접근이 가능함

	//요약 : 상속시 접근 지정자 private
	//부모			상속시 지정		외부에서 봤을때 부모의 접근 지정자
	//public	->	(private)	->	private
	//protected	->	(private)	->	private
	//private	->	(private)	->	private
}