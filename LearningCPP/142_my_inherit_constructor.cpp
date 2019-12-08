//자식 클래스의 부모 클래스 생성자 호출, 142_hw_basic_constructor보다 중요한 내용
#include<iostream>
using namespace std;

//부모 클래스
class phone {
protected:
	phone(int x) {
		cout << "부모 매개변수 있는 생성자 실행" << endl;
	}
	phone() {
		cout << "부모 매개변수 없는 생성자 실행" << endl;	//실행
	}
};

//자식1
class telephone : public phone {
public:
	telephone(int x) {
		cout << "자식 매개변수 있는 생성자 실행" << endl;
	}
	telephone() {
		cout << "자식 매개변수 없는 생성자 실행" << endl;
	}
	//상속받은 클래스의 함수를 쓰면 그 생성자와 부모의 생성자가 실행됨
	//특히 부모의 생성자는 항상 매개변수X 생성자가 실행됨
	//부모 생성자에 매개변수X 생성자가 없으면 오류남
};

//자식2
class mobilephone : public phone {
public:
	mobilephone(int x) : phone(5) {	
		cout << "자식 매개변수 있는 생성자 실행" << endl;
	}
	mobilephone() : phone(2) {
		cout << "자식 매개변수 없는 생성자 실행" << endl;
	}
	//혹시라도 부모의 매개변수o 생성자 실행하고 싶으면
	//이처럼 명시적으로 지정해주자
};

int main() {
	telephone Samsung(1);
	//자식 - 매개변수 O, 부모 - 매개변수 X
	telephone LG;
	//자식 - 매개변수 X, 부모 - 매개변수 X
	puts("");
	mobilephone Nokia(3);
	//자식 - 매개변수 O, 부모 - 매개변수 O
	mobilephone Sony;
	//자식 - 매개변수 X, 부모 - 매개변수 O
}