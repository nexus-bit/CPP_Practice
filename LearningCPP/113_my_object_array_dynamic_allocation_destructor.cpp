//�ڰ�ü ���� ������, �ٽ� ����� ���� �� ���� ��ü ������ delete�� ���� �Ҹ����� �޸� ��ȯ�� ���� �˾ƺ���, 
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();//������
	Circle(int r); //������
	~Circle(); //�Ҹ���
	//~Clrcle(int a) �߸��� �Ҹ���(�Ű�����X)
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

Circle::Circle() {
	radius = 1;
	cout << "�Ű� ���� ���� ������ �����" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "�Ű� ���� �ִ� ������ �����" << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��� �����" << endl;
	//�Ҹ��� �� ����� �θ� �⺻ �Ҹ��ڰ� ������
}

int main() {
	cout << "�Ϲ� ��ü(���� �Ҵ�)\n";
	Circle a(12); //������ �����
	cout << a.getArea() << endl << endl;

	cout << "�Ϲ� ��ü �迭(���� �Ҵ�)\n";
	Circle bob[2][2]; //������ �װ� �����
	cout << bob[0][1].getArea() << endl << endl;

	cout << "������ ����� �Ϲ� ��ü(���� �Ҵ�) - �ٸ� ��ü �ּҰ��� �޾Ƽ� ��\n";
	Circle hello(10); //������ �����
	Circle* b = &hello;
	cout << (*b).getArea() << endl << endl;

	/*������ ��ü�δ� ��ü ������ ���� 
	Circle* c;
	c.setRadius(2);
	cout << c->getArea() << endl << endl;*/

	cout << "���� �Ҵ�� ��ü(������ �̿�)\n";
	Circle* p, * q; //������ ��ü - ������ 2�� �����
	p = new Circle; //���� �Ҵ�
	q = new Circle(30); //���� �Ҵ�
	cout << (*p).getArea() << ", " << q->getArea() << endl << endl;

	cout << "���� �Ҵ�� ��ü �迭(������ �̿�) - ũ�� 3\n";
	//int* p = new int[8]		-> �Ϲ� �迭�� ���� �Ҵ� ���
	Circle *n = new Circle[3]; //�ڰ�ü �迭�� ���� �Ҵ� �����
	(n+1)->setRadius(2);
	(*(n+2)).setRadius(3);
	for (int i = 0; i < 3; i++)
		cout << (n + i)->getArea() << ' ';
	//[n++;] ó�� ���� �Ҵ�� ��ü �迭(n)�� ��ü �ּҸ� �����ϸ� delete�� ������ �߸� ã�� �Ǿ� ���� �߻�
	//�ݵ�� �� (n+i)ó�� ÷�ڸ� ���ų� [Circle *new_n = n; new_n++;] ó�� ���� �޸𸮰� �ƴ� �Ϲ� �����͸� ���� ��ü�� ��������
	puts("\n");


	puts("���� �Ҵ�� ��ü�� �޸� ��ȯ");
	delete p; //delete ���� �Ҹ��ڰ� ������ �Ǹ� �޸� ��ȯ��
	delete q; //���� �Ҵ��� �ʼ��� �ƴ�(�׷��� �޸� ��ȯ�� �ȵ�)

	puts("\n���� �Ҵ� ��ü �迭�� �޸� ��ȯ");
	delete[] n; //�迭 ������ŭ �Ҹ��� ����(���⼱ 3��)

	puts("\n���� �Ҵ�� ��ü �� ��ü �迭�� �޸� ��ȯ");
	//��ü ������ �������� �Ҵ�� ������ �ڵ����� �Ҹ��� ����Ǿ� �޸𸮰� ��ȯ��(���⼱ 6��)
}