#include<iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a + b;
	}
};

class Sub {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a - b;
	}
};

class Mul {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a * b;
	}
};

class Div {
	int a, b;
public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	float calculate() {
		return a / b;
	}
};

int main() {
	int x, y;
	char cal;
	while (1) {
		cout << "input two ints>";
		cin >> x >> y;
		cout << "add:a, subtract:s, multiply:m, divide:d\ninput>>";
		cin >> cal;
		if (cal == 'a'){
			Add a;
			a.setValue(x, y);
			int result = a.calculate();
			cout << "calc result : " << result;
		}
		else if(cal == 's'){
			Sub s;
			s.setValue(x, y);
			int result = s.calculate();
			cout << "calc result : " << result;
		}
		else if (cal == 'm') {
			Mul m;
			m.setValue(x, y);
			int result = m.calculate();
			cout << "calc result : " << result;
		}
		else if (cal == 'd') {
			Div d;
			d.setValue(x, y);
			float result = d.calculate();
			cout << "calc result : " << result;
		}
		else {
			cout << "you wrote incorrect char"; //exit _ 이상한 문자면 루프를 나간다
			break;
		}
		puts("");
	}
}