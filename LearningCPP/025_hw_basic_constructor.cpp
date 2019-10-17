//20191010 PT3_29p 기본 생성자 에러 확인
#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
	Circle(int r); //circle 생성자가 있어서 따로 기본 생성자 만듦
};

Circle::Circle(int r) {
	radius = r;
}

int main() {
	Circle pizza(30);
	//Circle donut; - 기본 생성자가 없으므로 컴파일 에러
}
