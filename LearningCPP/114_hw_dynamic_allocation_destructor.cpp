//20191113 PT4_23p ��ü�� ���� ������ ��ȯ ����
#include<iostream>
using namespace std;

class Square {
	int length;
public:
	Square();
	Square(int r);
	~Square();
	void setlength(int r) {
		length = r;
	}
	double getArea() {
		return length * length;
	}
};

Square::Square() {	//������ �Է¹��� �Ŷ� ������� ��������
	length = 1;
	cout << "�Ű� ���� ���� ������ �����" << endl;
}
Square::Square(int r) {
	length = r;
	cout << "�Ű� ���� �ִ� ������ �����" << endl;
}
Square::~Square() {
	cout << "�Ҹ��� �����" << endl;
}

int main() {
	int length;
	while (true) {
		cout << "���� �� ���� ���� �Է�(�����̸� ����)>";
		cin >> length;
		if (length < 0) break;
		Square* p = new Square(length);
		cout << "���簢���� ������ " << p->getArea() << endl;
		delete p;
		puts("");
	}
}