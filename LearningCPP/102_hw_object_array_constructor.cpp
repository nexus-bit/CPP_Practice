//20191030 ��ü �迭 ������ �⺻ ������ ȣ��
#include <iostream>
using namespace std;

//ù��° ���� : ��ü �迭�� ���� �ʱ�ȭ�� ��� ����
//class Circle {
//	int radius;
//public:
//	Circle(int r);
//	double getArea();
//};
//Circle::Circle(int r){
//	radius = r;
//}
//double Circle::getArea() {
//	return (3.14 * radius * radius);
//}
//
//int main() {
//	Circle (15);
//	Circle circleArray[3];
//}

//�ι�° ���� : �Ű����� 1��¥�� ������ ���� - ��ü �迭 �⺻ �����ڰ� ����������� waffle�� ���� �����ڴ� ����
//class Circle {
//	int radius;
//public:
//	double getArea();
//};
//
//double Circle::getArea() {
//	return (3.14 * radius * radius);
//}
//
//int main() {
//	Circle (15);
//	Circle circleArray[3];
//}

//����° ���� : waffle ��ü ���� - ��ü �迭�� ���� �⺻ ������ ������� ���� ����
class Circle {
	int radius;
public:
	double getArea();
};

double Circle::getArea() {
	return (3.14 * radius * radius);
}

int main() {
	Circle circleArray[3];
}