//20191210  project4 - TAX ��� ���α׷�
#include<iostream>
using namespace std;

int main() {
	int income, grade, tax;
	cout << "�� ���Ծ��� �Է��Ͻʽÿ� : ";
	cin >> income;
	cout << "�Ʒ��� �ش�Ǵ� ����� �Է��Ͻʽÿ�\n";
	cout << "(1:��Ȱ ��ȣ �����, 2:���� ������, 3:�Ϲ�)\n >";
	cin >> grade;

	cout << "==============================" << endl;
	cout << "***********������*************" << endl;
	cout << "�� ���Ծ� : " << income << "	��� : " << grade << endl;
	cout << "******************************" << endl;
	cout << "�ݾ�		����	����" << endl;
	cout << "-------------------------------" << endl;
	if (income < 500000) {
		tax = income * 0.02;
		cout << income << "		2%	" << tax << endl;
	}
	else if (income < 1000000) {
		if (grade == 1 || grade == 2) {
			tax = income * 0.02;
			cout << income << "		2%	" << tax << endl;
		}
		else {
			tax = 500000 * 0.02 + (income - 500000) * 0.05;
			cout << "500000		2%	" << 500000 * 0.02 << endl;
			cout << income - 500000 << "		5%	" << (income - 500000) * 0.05 << endl;
		}
	}
	else if (income < 2000000) {
		if (grade == 1 || grade == 2) {
			tax = 1000000 * 0.02 + (income - 1000000) * 0.05;
			cout << "1000000		2%	" << 1000000 * 0.02 << endl;
			cout << income - 1000000 << "		5%	" << (income - 1000000) * 0.05 << endl;
		}
		else {
			tax = 500000 * 0.02 + 500000 * 0.05 + (income - 1000000) * 0.07;
			cout << "500000		2%	" << 500000 * 0.02 << endl;
			cout << "500000		5%	" << 500000 * 0.05 << endl;
			cout << income - 1000000 << "		7%	" << (income - 1000000) * 0.07 << endl;
		}
	}
	else {
		switch (grade) {
		case 1:
			tax = 1000000 * 0.02 + (income - 1000000) * 0.05;
			cout << "1000000		2%	" << 1000000 * 0.02 << endl;
			cout << income - 1000000 << "		5%	" << (income - 1000000) * 0.05 << endl;
			break;
		case 2:
			tax = 1000000 * 0.02 + 1000000 * 0.05 + (income - 2000000) * 0.07;
			cout << "1000000		2%	" << 1000000 * 0.02 << endl;
			cout << "1000000		5%	" << 1000000 * 0.05 << endl;
			cout << income - 2000000 << "		7%	" << (income - 2000000) * 0.07 << endl;
			break;
		case 3:
			tax = 500000 * 0.02 + 500000 * 0.05 + 1000000 * 0.07 + (income - 2000000) * 0.1;
			cout << "500000		2%	" << 500000 * 0.02 << endl;
			cout << "500000		5%	" << 500000 * 0.05 << endl;
			cout << "1000000		7%	" << 1000000 * 0.07 << endl;
			cout << income - 2000000 << "		10%	" << (income - 2000000) * 0.1 << endl;
			break;
		}
	}
	cout << "-------------------------------" << endl;
	cout << "�� ���� " << tax << "���� ������ " << endl;
	cout << "���� ���ɾ� : " << income - tax << endl;
	cout << "******************************" << endl;
	cout << "Ż�� �����Ű� �Ⱓ�Դϴ�.\nŻ���� ���� ����� �մϴ�." << endl;
	cout << "==============================" << endl;
}
