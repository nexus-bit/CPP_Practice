////���� - 20191016 PT3_41p Ŭ���� ���� ���� ���� ���� test
//#include<iostream>
//using namespace std;
//
//class PrivateAccessError {
//private: //�ؿ� �͵��� ȣ���Ϸ��� private -> public���� �ٲٽÿ�
//	int a;
//	void f();
//	PrivateAccessError();
//public:
//	int b;
//	PrivateAccessError(int x);
//	void g();
//};
//PrivateAccessError::PrivateAccessError() {
//	a = 1; b = 1;
//}
//PrivateAccessError::PrivateAccessError(int x) {
//	a = x; b = x;
//}
//void PrivateAccessError::f() {
//	a = 5; b = 5;
//}
//void PrivateAccessError::g() {
//	a = 6; b = 6;
//}
//
//int main() {
//	PrivateAccessError object1; //private�̹Ƿ� ȣ���� �� ����. ȣ���Ϸ��� public���� �ٲپ�� ��
//	PrivateAccessError object2(100);
//	object2.a = 10;
//	object2.b = 20;
//	object2.f(); //private�̹Ƿ� ȣ���� �� ����. ȣ���Ϸ��� public���� �ٲپ�� ��
//	object2.g();
//}