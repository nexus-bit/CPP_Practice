//20191120 PT6_7p ����, �Ǽ�, �迭�� ����Ͽ� �Լ������ε� ����
//���� - �Լ��� ��ȣ��, �⺻ �Ű������� ���� ������ ����ȭ

//�Լ� �ߺ� - �Ű� ������ ���� ������ ������ �����ϴ°�(������ �ߺ�)�� ���� ����
//���� �̸��� �Լ����� �Ű� ������ ����, ������ ���� �ٸ��� ���� �� �ִ�
//�Ҹ��ڴ� �ߺ� �Ұ�(�Ű������� ���� ����)
#include<iostream>
using namespace std;

double big(double a, double b) { //����ū�Ǽ�
	if (a > b)return a;
	else return b;
}
int big(int a, int b) { //����ū���� - �Լ� �����ε�
	if (a > b)return a;
	else return b;
}
int big(int a[], int size) { //�迭��������ū�� - �Լ� �����ε�
	int biggest = 0;
	for (int i = 0; i < size; i++)
		if(a[i] > biggest)
			biggest = a[i];
	return biggest;
}

class hello {
	int byunsu;
public:
	hello(int a = 1) {byunsu = a;}	//����Ʈ �Ű������� �̿��� �������� ����ȭ
};

float moho(float a) {	//��ȣ�� �Լ� �� ��(�Լ� �ߺ��� ��ȣ��)
	cout << "float : ";
	return a;
}
double moho(double b) {
	cout << "double : ";
	return b;
}

int main() {
	int array[10] = { 1, 9, 55, -8, -74, 100, 0, -9, 6, -108 };
	cout << big(3.75, 5.12) << endl;
	cout << big(9, 8) << endl;
	cout << big(array, 10) << endl;

	hello forky;
	hello divo(30);

	cout << moho(3) << endl; //�� ȣ���ؾ� ���� �����ε��� �Լ��� ��ȣ��,
}