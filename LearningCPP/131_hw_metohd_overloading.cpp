//20191120 1~100 ������ ���� ���� �Է¹޾� ���� ���ϴ� �Լ��ߺ� ���α׷� ����� ����
/*����
	1)�ش� ������ �Ѿ�� ��� ���� ó��
	2) 2���� �����Է½�: ��(5,80): 5+ .... + 80������ ��
	3) 1���� ���� �Է½�
		-51�̻� : ��(77): 77+...+100������ ��
		-50���� : ��(33): 1+...+33������ ��	*/
#include<iostream>
#include <string>
using namespace std;

int sum(int a, int b) {
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}

int sum(int a) {
	int s = 0;
	if (a <= 50)
		for (int i = 0; i <= a; i++)
			s += i;
	else if (a > 50)
		for (int i = a; i <= 100; i++)
			s += i;
	return s;
}

int main() {
	string input("");
	int spacecount = 0; //���� �� ���
	int spacelocation = 0;
	cout << "1~100������ �� �ϳ� Ȥ�� �ΰ� �Է� >";
	getline(cin, input, '\n');

	for (int i = 0; i < input.length() + 1; i++) {
		if ((input[i] == ' ')) { //���� �߽߰�
			spacecount += 1; //������ ���� ī��Ʈ
			spacelocation = i; //������ ��ġ ����
		}
	}

	if (spacecount == 0) { //���� ���� ���� �ϳ�
		string sub = input.substr(0, input.length());
		int num = stoi(sub);
		if (num > 100 || num < 1) //1~100������ ���� �ƴ� ���
			cout << "1~100������ ���� �ƴմϴ�";
		else if (num < 50)
			cout << "1���� " << num << "������ ���� " << sum(num);
		else if (num >= 50)
			cout << num << "���� " << "100������ ���� " << sum(num);
	}

	else if (spacecount == 1) { //���� �ϳ�, ���� �ΰ�
		string sub1(input.substr(0, spacelocation));
		string sub2(input.substr(spacelocation));
		int num1 = stoi(sub1);
		int num2 = stoi(sub2);
		if (num1 > 100 || num1 < 1 || num2 > 100 || num2 < 1) //1~100������ ���� �ƴ� ���
			cout << "1~100������ ���� �ƴմϴ�";
		else
			cout << num1 << "���� " << num2 << "������ ���� " << sum(num1, num2);
	}

	else { //���� �ʹ� ���Ƽ� ���� ǥ��
		cout << "������ 2�� �̻��Դϴ�.";
	}
}