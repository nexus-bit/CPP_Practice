//20191114 book215p_11 Ŀ�� ���Ǳ� coffee vending machine
#include<iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() {
		//�ִ뷮 10���� ä���
		size = 10;
	}
	void consume() {
		//1��ŭ �Ҹ��ϱ�
		size = size - 1;
	}
	int getsize() {
		//���� ũ�� ����
		return size;
	}
};

class Coffeemachine {
	Container tong[3];	//Ŀ���� - 0, ���� - 1, ������ - 2
	void fill() {	//3�� ��� ä��
		tong[0].fill();
		tong[1].fill();
		tong[2].fill();
		cout << "������ �Ϸ�Ǿ����ϴ�" << endl;
	}
	void Espresso() {	//Ŀ��-1, ��-1
		if ((tong[0].getsize() < 1) || (tong[1].getsize() < 1))
			cout << "���ᰡ �����մϴ�" << endl;
		else {
			tong[0].consume();
			tong[1].consume();
			cout << "���������Ұ� ���ɴϴ�" << endl;
		}
	}
	void Americano() {	//Ŀ��-1, ��-2
		if ((tong[0].getsize() < 1) || (tong[1].getsize() < 2))
			cout << "���ᰡ �����մϴ�" << endl;
		else {
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
			cout << "�Ƹ޸�ī�밡 ���ɴϴ�" << endl;
		}
	}
	void Sugarcoffee() {	//Ŀ��-1, ��-2, ����-1
		if ((tong[0].getsize() < 1) || (tong[1].getsize() < 2) || (tong[2].getsize() < 1))
			cout << "���ᰡ �����մϴ�" << endl;
		else {
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
			tong[2].consume();
			cout << "����Ŀ�ǰ� ���ɴϴ�" << endl;
		}
	}
	void statement() {	//���� �ܷ�
		cout << "---------------�ܷ�----------------\n";
		cout << "Ŀ��	: " << tong[0].getsize() << endl;
		cout << "��	: " << tong[1].getsize() << endl;
		cout << "����	: " << tong[2].getsize() << endl;
	}
public:
	void run(int menu) {	//���Ǳ� �۵�
		switch (menu) {
		case 1:
			Espresso(); break;
		case 2:
			Americano(); break;
		case 3:
			Sugarcoffee(); break;
		case 4:
			statement(); break;
		case 5:
			fill();
		}
	}
};

int main() {
	cout << "*****Ŀ�� ���Ǳ⸦ �۵� �մϴ�*****\n";
	int menu;
	Coffeemachine user;
	while (1) {
		cout << "\n�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)\n>";
		cin >> menu;
		user.run(menu);
	}
}