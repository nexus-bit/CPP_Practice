//20191030 객체 배열 생성자 기본 생성자 호출
#include <iostream>
using namespace std;

//첫번째 실행 : 객체 배열에 대한 초기화가 없어서 오류
//class Circle {
//	int radius;
//public:
//	Circle(int r);
//	double getArea();
//};
//Circle::Circle(int r){
//	radius = r;
//}
//double Circle::getArea() {
//	return (3.14 * radius * radius);
//}
//
//int main() {
//	Circle (15);
//	Circle circleArray[3];
//}

//두번째 실행 : 매개변수 1개짜리 생성자 제거 - 객체 배열 기본 생성자가 만들어지지만 waffle에 대한 생성자는 없음
//class Circle {
//	int radius;
//public:
//	double getArea();
//};
//
//double Circle::getArea() {
//	return (3.14 * radius * radius);
//}
//
//int main() {
//	Circle (15);
//	Circle circleArray[3];
//}

//세번째 실행 : waffle 객체 제거 - 객체 배열에 대한 기본 생성자 만들어져 실행 가능
class Circle {
	int radius;
public:
	double getArea();
};

double Circle::getArea() {
	return (3.14 * radius * radius);
}

int main() {
	Circle circleArray[3];
}