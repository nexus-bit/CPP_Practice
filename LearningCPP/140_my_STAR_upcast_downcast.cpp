//PT8_13p ��Ӱ� ��ü ������ - ��ĳ���� �ٿ�ĳ����
#include<iostream>
using namespace std;

class point {
	int x, y;
public:
	void set(int x, int y);
	void showpoint();
};

class Cpoint : public point {	//point�� ��� ����
	string color;
public:
	void setColor(string color);
	void showColorPoint();
};

int main() {
	//�� ĳ���� : ����� ������ ��, Cpoint�� �θ��� point�� ����ȯ ��Ű��
	Cpoint cp;	//Cpoint�� ��ü�� ���� ��
	Cpoint* pDer = &cp;	//������ pDer�� �����Ų ��
	point* pBase = pDer;	//�θ��� ������ pBase���� �����Ŵ - �����͸� ���� ��ĳ����

	//�ٿ� ĳ���� : �ڽ�Ŭ������ ��ü�����ͷ� ġȯ
	pDer = (Cpoint*)pBase;	//��������ȯ - �ٿ�ĳ����
}