//20191114 book213p_9 contact book �ּҷ� �˻� ����
#include<iostream>
using namespace std;

class person {
	string name;
	string tel;
public:
	string getname() { return name; }
	string gettel(string word) { return tel; }
	void set(string name, string tel) {
		this->name = name; this->tel = tel;
	}
};

int main() {
	person saram[3];
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���\n";
	string n, t;
	
	for (int i = 0; i < 3; i++){
		cout << "��� " << i + 1 << " : ";
		cin >> n >> t;
		saram[i].set(n, t);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << saram[i].getname() << " ";
	}
	cout << "\n��ȭ��ȣ�� �˻��մϴ�. �̸� : ";
	cin >> n;
	for (int i = 0; i < 3; i++) {
		if (saram[i].getname() == n)
			cout << saram[i].gettel(n);
	}
}