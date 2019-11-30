//20191127 PT6_39p static ��� : ���� �Լ��� Ŭ���� ���� �����ؼ� ĸ��ȭ
//�̷��� ���蹮�� ���� ����
#include<iostream>
using namespace std;

class Circle {
	static int numofCircles;	//static ������ Ŭ���� ���� �� �ܺο��� �Ѵ� ����(��Ʈ)
	int radius;
public:
	Circle(int r = 1);
	~Circle();
	double getArea();
	static int getnumOfCircles() {	//static �Լ��� Ŭ���� ���ο� ����(������ �ƴ϶� �޸� �ʿ����)
		return numofCircles;
	}

};
Circle::Circle(int radius) {
	this->radius = radius;
	numofCircles++;
}
Circle::~Circle() {
	numofCircles--;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int Circle::numofCircles = 0;	////static ������ �ܺ� ���� ������ ��ũ ����

int main() {
	Circle* p = new Circle[5];	//���� �Ҵ� - 5���� ������ ����
	cout << "�����ϰ� �ִ� ���� ���� : " << Circle::getnumOfCircles() << endl;

	delete[] p;
	cout << "�����ϰ� �ִ� ���� ���� : " << Circle::getnumOfCircles() << endl;

	Circle one;
	Circle Two;
	Circle Three;
	cout << "�����ϰ� �ִ� ���� ���� : " << Circle::getnumOfCircles() << endl;
}