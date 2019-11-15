//★객체 생성 총정리, 핵심 내용★ 정적 및 동적 객체 생성과 delete를 통한 소멸자의 메모리 반환에 대해 알아보자, 
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();//생성자
	Circle(int r); //생성자
	~Circle(); //소멸자
	//~Clrcle(int a) 잘못된 소멸자(매개변수X)
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

Circle::Circle() {
	radius = 1;
	cout << "매개 변수 없는 생성자 실행됨" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "매개 변수 있는 생성자 실행됨" << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행됨" << endl;
	//소멸자 안 만들어 두면 기본 소멸자가 생성됨
}

int main() {
	cout << "일반 객체(정적 할당)\n";
	Circle a(12); //생성자 실행됨
	cout << a.getArea() << endl << endl;

	cout << "일반 객체 배열(정적 할당)\n";
	Circle bob[2][2]; //생성자 네개 실행됨
	cout << bob[0][1].getArea() << endl << endl;

	cout << "포인터 사용한 일반 객체(정적 할당) - 다른 객체 주소값을 받아서 씀\n";
	Circle hello(10); //생성자 실행됨
	Circle* b = &hello;
	cout << (*b).getArea() << endl << endl;

	/*포인터 자체로는 객체 만들지 못함 
	Circle* c;
	c.setRadius(2);
	cout << c->getArea() << endl << endl;*/

	cout << "동적 할당된 객체(포인터 이용)\n";
	Circle* p, * q; //포인터 객체 - 생성자 2개 실행됨
	p = new Circle; //동적 할당
	q = new Circle(30); //동적 할당
	cout << (*p).getArea() << ", " << q->getArea() << endl << endl;

	cout << "동적 할당된 객체 배열(포인터 이용) - 크기 3\n";
	//int* p = new int[8]		-> 일반 배열의 동적 할당 방법
	Circle *n = new Circle[3]; //★객체 배열의 동적 할당 방법★
	(n+1)->setRadius(2);
	(*(n+2)).setRadius(3);
	for (int i = 0; i < 3; i++)
		cout << (n + i)->getArea() << ' ';
	//[n++;] 처럼 동적 할당된 객체 배열(n)의 자체 주소를 수정하면 delete할 공간을 잘못 찾게 되어 에러 발생
	//반드시 위 (n+i)처럼 첨자를 쓰거나 [Circle *new_n = n; new_n++;] 처럼 동적 메모리가 아닌 일반 포인터를 통해 객체를 참조하자
	puts("\n");


	puts("동적 할당된 객체의 메모리 반환");
	delete p; //delete 사용시 소멸자가 실행이 되며 메모리 반환됨
	delete q; //동적 할당은 필수는 아님(그러나 메모리 반환이 안됨)

	puts("\n동적 할당 객체 배열의 메모리 반환");
	delete[] n; //배열 갯수만큼 소멸자 실행(여기선 3개)

	puts("\n정적 할당된 객체 및 객체 배열의 메모리 반환");
	//객체 생성시 정적으로 할당된 변수는 자동으로 소멸자 실행되어 메모리가 반환됨(여기선 6개)
}