//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//class hello {
//public:
//	int x;
//	int y;
//
//	hello(); //매개변수가 없는 생성자
//	hello(int a); //매개변수가 하나인 생성자
//	hello(int a, int b); //매개변수가 두개인 생성자
//
//	int func();
//	int func(int a);
//	int func(int a, int b); //함수
//};
//hello::hello() {
//	x = 9; y = 1; //hello클래스의 멤버 변수인 x, y를 a, b로 입력 받아도 무방(할 것 같다)
//}
//hello::hello(int a) {
//	x = 7; y = 0;
//}
//hello::hello(int a, int b) {
//	x = 1; y = 1;
//}
//
//int hello::func() {
//	return (x + y);
//}
//int hello::func(int a) {
//	return (x - y);
//}
//
//int hello::func(int a, int b) {
//	return (x * y);
//}
//int main() {
//	hello no3; //클래스 객체 생성시 기본 생성자의 매개 변수 없음 - 9, 1
//	cout << no3.func()/*'객체.함수'로 덧셈수행*/ << " " << no3.func(3, 4232)/*'객체.함수'로 곱셈 수행*/ << endl; //매개 변수에 맞는 함수 수행됨.
//
//	hello no1(8); //클래스 객체 생성시 기본 생성자의 매개 변수가 하나 - 7, 0
//	cout << no1.func() << " " << no1.func(3231, 4) << endl;
//
//	hello no2(8, 4); //클래스 객체 생성시 기본 생성자의 매개 변수가 둘 - 1, 1
//	cout << no2.func() << " " << no2.func(3, 4) << endl;
//
//
//
//}