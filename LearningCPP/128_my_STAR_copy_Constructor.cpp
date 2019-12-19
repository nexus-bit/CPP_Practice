//���� ������(���� ����, ���� �Ҵ�� �޸𸮱��� ���縦 ����)
//���� ���� : ����� �ϵ�, ���ΰ��� ������ ����
//���� ���� : �޸𸮱��� ������ ����(������ �޸� ���� �Ҵ�)
#include<iostream>
using namespace std;

//���� ������
class Circle {
	int radius;
public:
	Circle(const Circle& c) {	//���� ������, ���� ��� �����Ϸ��� ���� �ڵ� ����
		this->radius = c.radius;
		cout << "���� ������ ���� radius = " << radius << endl;
	}
	Circle(int radius) {this->radius = radius;}
	Circle() {radius = 1;}

	void setRadius(int radius) {this->radius = radius;}
	double getArea() { return radius * radius * 3.14; }
};

int main() {
	Circle object(30);	//��ü ���� - �Ϲ� ������ ȣ��
	Circle copy(object);	//���� ������ ȣ��(�����Ϸ��� ��ü�� �Ű������� ��)
	cout << "������ ���� : " << object.getArea() << endl;
	cout << "�纻�� ���� : " << copy.getArea() << endl;
	//���������� ���簡 ��

	copy.setRadius(20);	//���� �������� Ȯ���� ����
	cout << "������ ���� : " << object.getArea() << endl;
	cout << "�纻�� ���� : " << copy.getArea() << endl;
	//���� ���縦 �߱� ������ ������ ������ ������ ����

}