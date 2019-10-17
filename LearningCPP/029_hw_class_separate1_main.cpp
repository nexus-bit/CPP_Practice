//20191016 PT3_52~55p 헤더 클래스 매인 파일의 분리수행
#include<iostream>
#include "029_hw_class_separate1_Circle.h" //헤더는 중복으로 참조하면 에러가 발생하지만
#include "029_hw_class_separate1_Circle.h" //헤더 파일 내에 #ifndef와 #endif가 있어서 발생하지 않게 했다.
using namespace std;

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 ";
	cout << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
	cout << "프로그램을 종료합니다";
}
