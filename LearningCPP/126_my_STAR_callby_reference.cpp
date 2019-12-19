//Call by reference : ����(����) �� ���� ȣ��
#include<iostream>
using namespace std;

class Circle {	//����� Circle Ŭ����
	int radius;
public:
	Circle() {
		radius = 1;
		cout << "������ ����, radius = " << radius << endl;
	}
	Circle(int radius) {
		this->radius = radius;
		cout << "������ ����, radius = " << radius << endl;
	}
	~Circle() {
		cout << "�Ҹ��� ����, radius = " << radius << endl;
	}
	void setRadius(int radius) {this->radius = radius;}
	int getRadius() {return radius;}
};

void swap(int& a, int& b) {	//�Լ� ���� �� ������ ���ܿ�!
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	//������ �ٲٸ� ������ ���� �ٲ� -> Call By Refenrnce
}

void increaseCircle(Circle& c) {	//�̹����� ��ü ������ ����� ����?
	int r = c.getRadius();
	c.setRadius(r + 1);	//������ ���� ������ ��ü �������� 1�� ���غ���
	//������ �ٲٸ� ������ ���� �ٲ� -> Call By Refenrnce
}

int main() {
	int x = 100;
	int y = 9999;
	swap(x, y);
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	//����(���۷���)�� �ٲ���� �ڽŵ� �ٲ��!!

	puts("");
	Circle waffle(30);
	increaseCircle(waffle);	//�Ű� ������ ��ü�� ��
	cout << waffle.getRadius() << endl;
	//�Ҹ��ڸ� ���� ����(���۷���)���� �������� �ٲ���� ���� ��ü�� �������� �ٲ��!!
}