//Call by reference : 참조(별명) 에 의한 호출
#include<iostream>
using namespace std;

class Circle {	//평범한 Circle 클래스
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
	void setRadius(int radius) {this->radius = radius;}
	int getRadius() {return radius;}
};

void swap(int& a, int& b) {	//함수 실행 시 별명이 생겨요!
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	//별명을 바꾸면 원래의 값을 바꿈 -> Call By Refenrnce
}

void increaseCircle(Circle& c) {	//이번에는 객체 별명을 만들어 볼까?
	int r = c.getRadius();
	c.setRadius(r + 1);	//별명을 통해 원래의 객체 반지름에 1을 더해보자
	//별명을 바꾸면 원래의 값을 바꿈 -> Call By Refenrnce
}

int main() {
	int x = 100;
	int y = 9999;
	swap(x, y);
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	//별명(레퍼런스)를 바꿨더니 자신도 바뀌네!!

	puts("");
	Circle waffle(30);
	increaseCircle(waffle);	//매개 변수로 객체를 줌
	cout << waffle.getRadius() << endl;
	//소멸자를 보니 별명(레퍼런스)으로 반지름을 바꿨더니 실제 객체의 반지름도 바뀌네!!
}