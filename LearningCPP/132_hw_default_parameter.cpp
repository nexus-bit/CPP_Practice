//20191121 ���� Ȯ��, sum(), cal()�Լ� ó��, �����ذ� ���α׷�
#include<iostream>
using namespace std;

/*����*/
//int add(int a, int b = 5, int c = 4) { //�⺻ �Ű������� �����ʺ��� ������ ��
//	return a + b;
//}
//
//int main() {
//	cout << add(10) << endl;
//	cout << add(10, 20) <<endl;
//	cout << add(10, 20, 30) <<endl;
//}

void calc(int a=0, int b=0, int c=0, int d=0) { //���� �߻�, �⺻ �Ű����� ���� �߰�
	cout << a + b + c + d << endl;
}

void sum(int a, int b=1, int c=1) { //���� �߻�, �⺻ �Ű����� ���κ� �߰�
	int result = 0;
	for (int i = 0; i <= a; i++)
		result += i;
	for (int i = 0; i <= b; i++)
		result += i;
	for (int i = 0; i <= c; i++)
		result += i;
	cout << result << endl;
}

int main() {
	calc();
	calc(1, 2, 3);
	calc(10, 20, 30, 40);
	sum(1); //�⺻ �Ű������� �ִ� �κ��� ���� ����
	sum(2, 2, 2);
	sum(2, 3, 3);
}