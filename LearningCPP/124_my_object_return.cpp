//객체 치환, 객체 리턴
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius;}
	double getArea() {return 3.14 * radius * radius;}
	void setRadius(int radius) {this->radius = radius;}
};

Circle getCircle() {	//★리턴값이 객체이므로 반환명은 클래스 이름을 쓰기★
	Circle temp(10);
	return temp;	//객체를 리턴하기
}

int main() {
	Circle ball;	//반지름 1인 객체 ball 생성
	Circle hello(20);
	cout << ball.getArea() << endl;	//면적은 3.14

	ball = hello;	//객체 치환 가능
	ball = getCircle();	//이번엔 함수를 통해 객체 ball에다가 temp 객체 치환
	cout << ball.getArea();	//바뀐 ball의 면적은 314

}