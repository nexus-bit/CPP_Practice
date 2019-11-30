//Call by value(���� ���� ȣ��)�� �Ű� ������ ���� ��ü�� ������ ����X
#include<iostream>
using namespace std;

class Circle {
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
	double getArea() {
		return 3.14 * radius * radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
};

void increase(Circle c);
void decrease(Circle *c);

int main() {
	cout << "��ü '����'����\n";
	Circle waffle(30);
	cout << "��� �Լ� ȣ�� - "<< waffle.getRadius() << endl;

	cout << "\n��ü �� ���� ��� �Լ�\n";
	increase(waffle);
	cout << "������ ���� �Ҹ��ڰ� ����ȴ�.. ����:�Ű� ���� ��ü�� �״�� ���ÿ� ����/���޵�\n";
	cout << "��� �Լ� ȣ�� - " << waffle.getRadius() << " - ���� ��ü�� ���� ������ ����" << endl;

	cout << "\n��ü �� ���� ���۷��� �Լ�\n";
	decrease(&waffle);
	cout << "�����ڳ� �Ҹ��ڰ� ������� ����\n";
	cout << "��� �Լ� ȣ�� - " << waffle.getRadius() << " - ���� ��ü�� ���� ���ߴ�" << endl;

	cout << "\n���α׷� ��\n";
	//���α׷��� ������ ���� �Ҵ�� ��� ��ü �޸� ��ȯ(�Ҹ��)
}

void increase(Circle c) {	//�Ű� ������ ���� '����'��ü�� ������ ���� ����� - ������ ���� X
	int r = c.getRadius();	//��, ������ ���� ��ü�� ���������!!
	c.setRadius(r + 1);		//�׷��� �Լ��� ������ �Ҹ�� - ���� ��ü ������ ������ ����
}

void decrease(Circle *c) {	//������ (�ּ�)�� ���� ������ ����
	int r = c->getRadius();	//������ ��ü�� ������
	(*c).setRadius(r - 1);	//������ ��ü ������ ����!
}