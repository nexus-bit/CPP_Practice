//��ü ġȯ, ��ü ����
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius;}
	double getArea() {return 3.14 * radius * radius;}
	void setRadius(int radius) {this->radius = radius;}
};

Circle getCircle() {	//�ڸ��ϰ��� ��ü�̹Ƿ� ��ȯ���� Ŭ���� �̸��� �����
	Circle temp(10);
	return temp;	//��ü�� �����ϱ�
}

int main() {
	Circle ball;	//������ 1�� ��ü ball ����
	Circle hello(20);
	cout << ball.getArea() << endl;	//������ 3.14

	ball = hello;	//��ü ġȯ ����
	ball = getCircle();	//�̹��� �Լ��� ���� ��ü ball���ٰ� temp ��ü ġȯ
	cout << ball.getArea();	//�ٲ� ball�� ������ 314

}