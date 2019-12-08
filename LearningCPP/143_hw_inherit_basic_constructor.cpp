//20191204 PT8_23p 상속과 생성자
#include<iostream>
using namespace std;

// class A{
// public:
// 	A(int x){
// 		cout << "매개 변수 있는 생성자 A 실행" << endl; //상속받은 B는 A의 매개변수 없는 생성자가 필요
// 	}
// };

// class B : public A{
// public:
// 	B(){	//상속받은 A의 기본 생성자A()가 없어서 - 생성자 실행 불가
// 		cout << "매개 변수 있는 생성자 B 실행" << endl; //B의 생성자는 A의 기본 생성자 A()가 필요
// 	}
// };

class A {
public:
	//매개변수 있는 생성자를 추가하거나(A(int x){})
	//아예 생성자를 없애 기본 생성자가 만들어지도록 설정
};

class B : public A {
public:
	B() {
		cout << "매개 변수 있는 생성자 B 실행" << endl; //B의 생성자는 상위 클래스의 A의 기본 생성자 A()가 있어서 실행 가능
	}
};


int main() {
	cout << "프로그램 정상 종료됨" << endl;
	return 0;
}