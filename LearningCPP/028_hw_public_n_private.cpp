//20191016 PT3_41p 클래스 접근 권한 지정 오류 test
#include<iostream>
using namespace std;

class PrivateAccessError {
private: //밑에 것들을 호출하려면 private -> public으로 바꾸시오
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
};
PrivateAccessError::PrivateAccessError() {
	a = 1; b = 1;
}
PrivateAccessError::PrivateAccessError(int x) {
	a = x; b = x;
}
void PrivateAccessError::f() {
	a = 5; b = 5;
}
void PrivateAccessError::g() {
	a = 6; b = 6;
}

int main() {
	PrivateAccessError object1; //private이므로 호출할 수 없다. 호출하려면 public으로 바꾸어야 함
	PrivateAccessError object2(100);
	object2.a = 10;
	object2.b = 20;
	object2.f(); //private이므로 호출할 수 없다. 호출하려면 public으로 바꾸어야 함
	object2.g();
}
