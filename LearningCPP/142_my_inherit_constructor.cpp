//�ڽ� Ŭ������ �θ� Ŭ���� ������ ȣ��, 142_hw_basic_constructor���� �߿��� ����
#include<iostream>
using namespace std;

//�θ� Ŭ����
class phone {
protected:
	phone(int x) {
		cout << "�θ� �Ű����� �ִ� ������ ����" << endl;
	}
	phone() {
		cout << "�θ� �Ű����� ���� ������ ����" << endl;	//����
	}
};

//�ڽ�1
class telephone : public phone {
public:
	telephone(int x) {
		cout << "�ڽ� �Ű����� �ִ� ������ ����" << endl;
	}
	telephone() {
		cout << "�ڽ� �Ű����� ���� ������ ����" << endl;
	}
	//��ӹ��� Ŭ������ �Լ��� ���� �� �����ڿ� �θ��� �����ڰ� �����
	//Ư�� �θ��� �����ڴ� �׻� �Ű�����X �����ڰ� �����
	//�θ� �����ڿ� �Ű�����X �����ڰ� ������ ������
};

//�ڽ�2
class mobilephone : public phone {
public:
	mobilephone(int x) : phone(5) {	
		cout << "�ڽ� �Ű����� �ִ� ������ ����" << endl;
	}
	mobilephone() : phone(2) {
		cout << "�ڽ� �Ű����� ���� ������ ����" << endl;
	}
	//Ȥ�ö� �θ��� �Ű�����o ������ �����ϰ� ������
	//��ó�� ��������� ����������
};

int main() {
	telephone Samsung(1);
	//�ڽ� - �Ű����� O, �θ� - �Ű����� X
	telephone LG;
	//�ڽ� - �Ű����� X, �θ� - �Ű����� X
	puts("");
	mobilephone Nokia(3);
	//�ڽ� - �Ű����� O, �θ� - �Ű����� O
	mobilephone Sony;
	//�ڽ� - �Ű����� X, �θ� - �Ű����� O
}