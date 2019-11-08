#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	//Circle() { radius = 1; } 어차피 함수로 초기화 할 거라서 생성자는 기본 생성자로 충분
	void setRadius(int r) { radius = r; }
	float getArea() { return (radius * radius * 3.14); }
};

int main() {
	Circle circleArray[3];

	//배열의 각 원소 객체의 초기화 (개별 초기화 안할거면 setRadius 필요 없고 생성자만 지정해주자)
	//↓에러가 뜨는 이유는 생성자를 통한 객체 초기화를 안하고 함수를 썼기 때문
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	//배열의 각 원소 객체의 배열 참조
	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	//포인터를 통한 배열 참조 2가지 방법
	Circle* p;
	p = circleArray;
	//방법 1 값을 통한 참조
	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의 면적은 " << (*(p+i)).getArea() << endl;
	//방법 2 포인터를 통한 참조
	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++;
	}

}