//20191205 PT8_36p ���� ���
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

class Calculator : public Adder, public Subtractor {	//�ڴ��� ����� �����ϴ١�
	//���� : public���� ��� ���� ������ �Ͽ�� protected���� ������ ����, �׸��� public�� ���ֵ� ����
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