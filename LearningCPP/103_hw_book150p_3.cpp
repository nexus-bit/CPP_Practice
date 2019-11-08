//20191030 Ŭ������ �� ���� ����� ����
#include <iostream>
using namespace std;

class Account {
	string owner;
	int number;
	int remain = 0;
public:
	Account(string name, int num, int money);
	string getOwner() {
		return owner;
	}
	void deposit(int in) {
		remain += in;
	}
	int withdraw(int out) {
		remain -= out;
		return remain;
	}
	int inquiry() {
		return remain;
	}
};

Account::Account(string name, int num, int money) {
	owner = name;
	number = num;
	remain = money;
}

int main() {
	Account a("nexusbit", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}