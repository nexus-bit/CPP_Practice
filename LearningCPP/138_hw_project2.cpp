//20191128  project2 - �ǸŽ��� ��� ���α׷�
#include<iostream>
using namespace std;
int main() {
	//�Ǹ� �ݾ� : ����, ����, ���Ǿ�
	//���Ǹž� : ���ͷ� �Ǹ�����(��������)
	//�� �Ǹ����� :t�� �Ǹ�����, ����, �հ�
	//���� : ������ ������ 0�̰ų� ���� ���ϰ��� ������ �׸���.
	int price, num, total, benefit, tax;
	cout << "������ ���� : ";
	cin >> price;
	cout << "������ ���� : ";
	cin >> num;
	cout << "���ͷ�% �Է� : ";
	cin >> benefit;
	total = price * num;

	cout << "\n\n�Ǹűݾ�=================================\n";
	cout << "��	��	: " << price << "	���� : " << num;
	cout << "\n�Ǹ� �ݾ�	: " << total;

	cout << "\n\n���Ǹž�=================================\n";
	cout << "���ͷ� : " << benefit << "%, �Ǹ�����(��������) : " << total * benefit / 100;

	cout << "\n\n�� �Ǹ�����==============================\n";
	tax = 10;
	cout << "�� �Ǹ�����	: " << (total * benefit / 100) - (total * benefit / 100 / tax) << endl;
	cout << "��	��	: " <<  total * benefit / 100 / tax << "(" << tax << "%)";

	cout << "\n\n�հ�=====================================\n";
	cout << "��	��	: " << total * benefit / 100 / tax << endl;

	return 0;
}