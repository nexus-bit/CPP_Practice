//20191030 객체 포인터 선언 및 활용
#include <iostream>
using namespace std;

class Square { //클래스 내의 생성자, 멤버 함수를 외부로 빼지 않아도 됨
	int length;
public:
	Square(){
		length = 2;
	}
	Square(int l) {
		length = l;
	}
	int getArea() {
		return (length * length);
	}
};

int main() {
	Square spongebob;
	Square table(10);
	Square* pointer; //객체 포인터 선언

	cout << spongebob.getArea() << endl; //원래 알던 대로 멤버 함수 접근

	pointer = &spongebob; //객체 포인터는 객체 spongebob을 가르킴
	cout << pointer->getArea() << endl; //spongebob의 getArea()호출 - 주소를 통해서 : ->
	cout << (*pointer).getArea() << endl; //spongebob의 getArea()호출 - 내용을 통해서 : .

	pointer = &table;
	cout << pointer->getArea() << endl; //table의 getArea()호출 - 주소를 통해서 : ->
	cout << (*pointer).getArea() << endl; //table의 getArea()호출 - 내용을 통해서 : .
}