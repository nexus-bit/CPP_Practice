//20191030 객체 배열 생성자 기본 생성자 호출
#include <iostream>
using namespace std;

//첫번째 실행 : 객체 배열에 대한 (매개 변수가 없는)생성자가 없어서 오류
class Circle {
	int radius;
public:
	Circle(int r);
	double getArea();
};
Circle::Circle(int r){
	radius = r;
}
double Circle::getArea() {
	return (3.14 * radius * radius);
}

int main() {
	Circle waffle(15);
	Circle circleArray[3];	//나도 생성자 만들어 줘..
}

//두번째 실행 : 생성자 모두 제거 : 객체 배열 기본 생성자가 만들어지지만 waffle에 대한 생성자는 없음
class Circle {
	int radius;
public:
	double getArea();
};

double Circle::getArea() {
	return (3.14 * radius * radius);
}

int main() {
	Circle waffle(15);	//내 생성자 어디갔어
	Circle circleArray[3];
}

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
	Circle circleArray[3];				//실행은 가능하지만 여기서 기본 생성자는..
	cout << circleArray[0].getArea();	//컴파일러가 임의대로 만든 것이라 원하는 답이 나오지는 않음
}

//네번째 실행 : 두 객체에 대한 생성자를 각각 만듦 - 두 객체 정상 작동
class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int r) {
		radius = r;
	}
	double getArea() {
		return (3.14 * radius * radius);
	}
};

int main() {
	Circle waffle(100);
	cout << waffle.getArea() << endl;
	Circle circleArray[3];
	cout << (*circleArray).getArea() << " " << circleArray->getArea() << " " << circleArray[0].getArea() ; //모두 circlearray[0]를 칭함
}