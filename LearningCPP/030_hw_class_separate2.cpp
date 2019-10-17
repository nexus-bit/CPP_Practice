////과제 - 20191017 pt3_56~57p 클래스, 메인, 멤버함수 하나의 파일
//#include<iostream>
//using namespace std;
//
//class adder {
//	int op1, op2;
//public:
//	adder(int a, int b);
//	int process();
//};
//adder::adder(int a, int b) {
//	op1 = a; op2 = b;
//}
//int adder::process() {
//	return op1 + op2;
//}
//
//class calculator {
//public:
//	void run();
//};
//void calculator::run() {
//	cout << "두 개의 수 입력>";
//	int a, b;
//	cin >> a >> b; //정수 두 개 입력
//	adder adder(a, b); //덧셈기 생성
//	cout << adder.process(); //덧셈기 계산
//}
//
//int main() {
//	calculator object1;
//	object1.run();
//}