//20191205 PT8_36p 다중 상속
#include<iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b) { return a + b; }
};

class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};

class Calculator : public Adder, public Subtractor {	//★다중 상속이 가능하다★
	//복습 : public으로 상속 접근 지정을 하였어도 protected임은 변하지 않음, 그리고 public은 없애도 무방
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
	int res = 0;
	switch (op) {
	case '+':res = add(a, b); break;
	case '-':res = minus(a, b); break;
	}
	return res;
}

int main() {
	Calculator C1;
	cout << "2 + 4 = " << C1.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << C1.calc('-', 100, 8) << endl;
}