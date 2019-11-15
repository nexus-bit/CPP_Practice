//20191113 PT4_23p 객체의 동적 생성과 반환 응용
#include<iostream>
using namespace std;

class Square {
	int length;
public:
	Square();
	Square(int r);
	~Square();
	void setlength(int r) {
		length = r;
	}
	double getArea() {
		return length * length;
	}
};

Square::Square() {	//어차피 입력받을 거라서 쓸모없는 생성자임
	length = 1;
	cout << "매개 변수 없는 생성자 실행됨" << endl;
}
Square::Square(int r) {
	length = r;
	cout << "매개 변수 있는 생성자 실행됨" << endl;
}
Square::~Square() {
	cout << "소멸자 실행됨" << endl;
}

int main() {
	int length;
	while (true) {
		cout << "정수 한 면의 길이 입력(음수이면 종료)>";
		cin >> length;
		if (length < 0) break;
		Square* p = new Square(length);
		cout << "정사각형의 면적은 " << p->getArea() << endl;
		delete p;
		puts("");
	}
}