//20191030 ��ü �迭 ������ �⺻ ������ ȣ��
#include <iostream>
using namespace std;

//ù��° ���� : ��ü �迭�� ���� (�Ű� ������ ����)�����ڰ� ��� ����
class Circle {
	int radius;
public:
	Circle(int r);
	double getArea();
};
Circle::Circle(int r){
	radius = r;
}
double Circle::getArea() {
	return (3.14 * radius * radius);
}

int main() {
	Circle waffle(15);
	Circle circleArray[3];	//���� ������ ����� ��..
}

//�ι�° ���� : ������ ��� ���� : ��ü �迭 �⺻ �����ڰ� ����������� waffle�� ���� �����ڴ� ����
class Circle {
	int radius;
public:
	double getArea();
};

double Circle::getArea() {
	return (3.14 * radius * radius);
}

int main() {
	Circle waffle(15);	//�� ������ ��𰬾�
	Circle circleArray[3];
}

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
	Circle circleArray[3];				//������ ���������� ���⼭ �⺻ �����ڴ�..
	cout << circleArray[0].getArea();	//�����Ϸ��� ���Ǵ�� ���� ���̶� ���ϴ� ���� �������� ����
}

//�׹�° ���� : �� ��ü�� ���� �����ڸ� ���� ���� - �� ��ü ���� �۵�
class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int r) {
		radius = r;
	}
	double getArea() {
		return (3.14 * radius * radius);
	}
};

int main() {
	Circle waffle(100);
	cout << waffle.getArea() << endl;
	Circle circleArray[3];
	cout << (*circleArray).getArea() << " " << circleArray->getArea() << " " << circleArray[0].getArea() ; //��� circlearray[0]�� Ī��
}