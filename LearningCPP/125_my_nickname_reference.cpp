//���� ����(reference) - ����(�̳�����)
#include<iostream>
using namespace std;

class Circle {
public:
	void getRadius(){}
};

int main() {
	int name = 2;
	int newnum = 100;
	int& NAME = name;	//&&&&&&
	NAME = newnum;	//���� = ��, ���� = ���� ����
	cout << name;

	int* p = &NAME;	//�������� ������ ����
	*p = 999;
	cout << '\n' << *p << " " << name << " " << NAME;

	Circle CD2;
	Circle& myCD = CD2;	//������ ���ο� ������ �Ҵ����� ����.
	myCD.getRadius();	//�ּҰ� �ƴ϶� '->' ���� �ȵ�
}