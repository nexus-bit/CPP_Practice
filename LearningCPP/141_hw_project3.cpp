//20191204 project3 ���� ���淮 ���ϴ� ���α׷�(����)
#include<iostream>
using namespace std;

int main() {
	float oil; int oilday;
	int day = 0; int km = 0;
	while (1) {
		cout << "0~500 ������ �⸧ ���� �Է��ϼ���>>";
		cin >> oil;
		if (oil <= 500 && oil >= 0)
			break;
		else
			cout << "0~500���̸� �Է��ϼ���.\n";
	}

	cout << "===============================\n";
	cout << "��¥   ���ᷮ  ����Ÿ�    ���Ẹ��\n";
	cout << "===============================\n";

	cout.precision(4); //�Ҽ������� ���ڸ� ���ڱ��� ���
	while (oil > 0) {
		cout << day << "	" << oil << "	" << km << "	";
		if (oil > 20) {
			cout << "����" << endl;
			oilday = day + 3;
		}
		else cout << "���� ��" << endl;
		day += 3;
		km += 25 * day;
		oil = oil - (75 / 11.8);
	}

	cout << "===============================\n";
	cout << "���� �������� ����κ��� " << oilday << "�� �� �Դϴ�." << endl;
	return 0;
}