//20191120 ����, �Ǽ�, �迭�� ����Ͽ� �Լ������ε� �����Ͽ� �ִ�, �ּҰ� ���

//�Լ� �ߺ� - �Ű� ������ ���� ������ ������ �����ϴ°�(������ �ߺ�)�� ���� ����
//���� �̸��� �Լ����� �Ű� ������ ����, ������ ���� �ٸ��� ���� �� �ִ�
//�Ҹ��ڴ� �ߺ� �Ұ�(�Ű������� ���� ����)
#include<iostream>
using namespace std;

double big(double a, double b) { //����ū�Ǽ�
	if (a > b)return a;
	else return b;
}

int big(int a, int b) { //����ū����
	if (a > b)return a;
	else return b;
}

int big(int a[], int size) { //�迭��������ū��
	int biggest = 0;
	for (int i = 0; i < size; i++)
		if(a[i] > biggest)
			biggest = a[i];
	return biggest;
}

int main() {
	int array[10] = { 1, 9, 55, -8, -74, 100, 0, -9, 6, -108 };
	cout << big(3.75, 5.12) << endl;
	cout << big(9, 8) << endl;
	cout << big(array, 10);
}