//20191127 PT6_39p static 멤버 : 전역 함수를 클래스 내에 구현해서 캡슐화
//이런거 시험문제 내기 좋음
#include<iostream>
using namespace std;

class Circle {
	static int numofCircles;	//static 변수는 클래스 내부 및 외부에서 둘다 선언(세트)
	int radius;
public:
	Circle(int r = 1);
	~Circle();
	double getArea();
	static int getnumOfCircles() {	//static 함수는 클래스 내부에 선언(변수가 아니라 메모리 필요없음)
		return numofCircles;
	}

};
Circle::Circle(int radius) {
	this->radius = radius;
	numofCircles++;
}
Circle::~Circle() {
	numofCircles--;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int Circle::numofCircles = 0;	////static 변수는 외부 선언 없으면 링크 오류

int main() {
	Circle* p = new Circle[5];	//동적 할당 - 5개의 생성자 실행
	cout << "생존하고 있는 원의 개수 : " << Circle::getnumOfCircles() << endl;

	delete[] p;
	cout << "생존하고 있는 원의 개수 : " << Circle::getnumOfCircles() << endl;

	Circle one;
	Circle Two;
	Circle Three;
	cout << "생존하고 있는 원의 개수 : " << Circle::getnumOfCircles() << endl;
}