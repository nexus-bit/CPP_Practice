//Call by value(값에 의한 호출)시 매개 변수로 받은 객체의 생성자 실행X
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
		cout << "생성자 실행, radius = " << radius << endl;
	}
	Circle(int radius) {
		this->radius = radius;
		cout << "생성자 실행, radius = " << radius << endl;
	}
	~Circle() {
		cout << "소멸자 실행, radius = " << radius << endl;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
};

void increase(Circle c);
void decrease(Circle *c);

int main() {
	cout << "객체 '와플'생성\n";
	Circle waffle(30);
	cout << "멤버 함수 호출 - "<< waffle.getRadius() << endl;

	cout << "\n객체 콜 바이 밸류 함수\n";
	increase(waffle);
	cout << "생성자 없이 소멸자가 실행된다.. 이유:매개 변수 객체에 그대로 스택에 복사/전달됨\n";
	cout << "멤버 함수 호출 - " << waffle.getRadius() << " - 본래 객체의 값은 변하지 않음" << endl;

	cout << "\n객체 콜 바이 레퍼런스 함수\n";
	decrease(&waffle);
	cout << "생성자나 소멸자가 실행되지 않음\n";
	cout << "멤버 함수 호출 - " << waffle.getRadius() << " - 본래 객체의 값이 변했다" << endl;

	cout << "\n프로그램 끝\n";
	//프로그램이 끝날때 정적 할당된 모든 객체 메모리 반환(소멸됨)
}

void increase(Circle c) {	//매개 변수로 받은 '와플'객체의 내용이 전부 복사됨 - 생성자 실행 X
	int r = c.getRadius();	//즉, 생성자 없이 객체가 만들어졌다!!
	c.setRadius(r + 1);		//그러나 함수가 끝나면 소멸됨 - 원래 객체 내용은 변하지 않음
}

void decrease(Circle *c) {	//포인터 (주소)로 직접 참조를 했음
	int r = c->getRadius();	//원래의 객체를 참조함
	(*c).setRadius(r - 1);	//원래의 객체 내용이 변함!
}