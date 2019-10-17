//20191017 PT3_56~57p 클래스 메인 멤버함수 파일의 분리수행
#include<iostream>
#include "030_hw_class_separate2_Calculator.h"
#include "030_hw_class_separate2_Adder.h"
using namespace std;


void calculator::run() {
	cout << "두 개의 수 입력>";
	int a, b;
	cin >> a >> b; //정수 두 개 입력
	Adder adder(a, b); //덧셈기 생성
	cout << adder.process(); //덧셈기 계산
}
