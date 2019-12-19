//복사 생성자(깊은 복사, 동적 할당된 메모리까지 복사를 해줌)
//얕은 복사 : 복사는 하되, 서로간의 공간을 공유
//깊은 복사 : 메모리까지 완전한 복사(별도로 메모리 동적 할당)
#include<iostream>
using namespace std;

//복사 생성자
class Circle {
	int radius;
public:
	Circle(const Circle& c) {	//복사 생성자, 없을 경우 컴파일러에 의한 자동 생성
		this->radius = c.radius;
		cout << "복사 생성자 실행 radius = " << radius << endl;
	}
	Circle(int radius) {this->radius = radius;}
	Circle() {radius = 1;}

	void setRadius(int radius) {this->radius = radius;}
	double getArea() { return radius * radius * 3.14; }
};

int main() {
	Circle object(30);	//객체 생성 - 일반 생성자 호출
	Circle copy(object);	//복사 생성자 호출(복사하려는 객체를 매개변수로 줌)
	cout << "원본의 면적 : " << object.getArea() << endl;
	cout << "사본의 면적 : " << copy.getArea() << endl;
	//정상적으로 복사가 됨

	copy.setRadius(20);	//깊은 복사인지 확인해 보자
	cout << "원본의 면적 : " << object.getArea() << endl;
	cout << "사본의 면적 : " << copy.getArea() << endl;
	//깊은 복사를 했기 때문에 원본의 면적은 변하지 않음

}