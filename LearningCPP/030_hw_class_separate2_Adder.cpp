//과제 - 20191017 PT3_56~57p 클래스 메인 멤버함수 파일의 분리수행
#include<iostream>
#include "030_hw_class_separate2_Adder.h"
using namespace std;


Adder::Adder(int a, int b) {
	op1 = a; op2 = b;
}

int Adder::process() {
	return op1 + op2;
}
