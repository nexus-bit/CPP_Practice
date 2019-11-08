#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	//Circle() { radius = 1; } ������ �Լ��� �ʱ�ȭ �� �Ŷ� �����ڴ� �⺻ �����ڷ� ���
	void setRadius(int r) { radius = r; }
	float getArea() { return (radius * radius * 3.14); }
};

int main() {
	Circle circleArray[3];

	//�迭�� �� ���� ��ü�� �ʱ�ȭ (���� �ʱ�ȭ ���ҰŸ� setRadius �ʿ� ���� �����ڸ� ����������)
	//�鿡���� �ߴ� ������ �����ڸ� ���� ��ü �ʱ�ȭ�� ���ϰ� �Լ��� ��� ����
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	//�迭�� �� ���� ��ü�� �迭 ����
	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;

	//�����͸� ���� �迭 ���� 2���� ���
	Circle* p;
	p = circleArray;
	//��� 1 ���� ���� ����
	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "�� ������ " << (*(p+i)).getArea() << endl;
	//��� 2 �����͸� ���� ����
	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++;
	}

}