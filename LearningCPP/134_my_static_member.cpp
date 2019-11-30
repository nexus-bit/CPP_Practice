//Static ��� : ���� �Լ��� Ŭ���� ���� �����ؼ� ĸ��ȭ
//���� ���� ����ó�� ���� ������ �� ���� ����

//static ����� ��ü ���ΰ� �ƴ� ������ ������ ���� - ��ü ���� X
//���� ��ü�� ������� ���α׷��� ����� �� �Ҹ�
#include<iostream>
using namespace std;


//***static Ȱ�� 1 : Ŭ���� ��� ���� ���� ����***///
class Person {
public:	//public�̾�� �ٸ� ����� ���� ����
	int money; //���� ������ ��
	void addmoney(int money) {
		this->money = money;
	}

	static int sharedMoney;	//�д�Ȱ����, static ������ Ŭ���� ���� �� �ܺο��� �Ѵ� ����(��Ʈ)
	static void addshared(int money) {
		sharedMoney = sharedMoney + money;
	}
	
	int total() {return money + sharedMoney;}	//�Ϲ� ����� static�� non-static ��� ���� ����
	//static int total() { return money + sharedMoney; } ���� : static ����� static�� ���� ����
};
int Person::sharedMoney = 0;	//Ȱ���� �ʱ�ȭ, static�޸𸮴� ��ü�� �ƴ� ���� ������ ����



//***static Ȱ�� 2 : static �Լ��� ���� private ��� ����***//
class square {
	int length;
	static int shapes;	//������ privateȭ ��Ŵ
public:
	square(int length = 1) {
		this->length = length;
		shapes++;	//������ ���� 1 ����
	}
	~square() {
		shapes--;	//�Ҹ�� ���� 1 ����
	}
	static void addshape() {
		shapes++;	//�Լ� ȣ��� ���� 1 ����
	}
	static void delshape() {
		shapes++;	//�Լ� ȣ��� ���� 1 ����
	}
	static int getshape() {
		return shapes;	//�Լ� ȣ��� ���� ����
	}
};
class circle {
	int radius;
public:
	circle(int radius = 1) {
		this->radius = radius;
		square::addshape();	//������ square�� shape���� 1 �����ϴ� �Լ� ȣ��
	}
	~circle() {
		square::delshape(); //������ square�� shape���� 1 �����ϴ� �Լ� ȣ��
	}
};
int square::shapes = 0;	//static�޸𸮴� ��ü�� �ƴ� ���� ������ ����



int main() {
	Person kim;
	kim.money = 165000;	//�̺� ����
	kim.sharedMoney = 12000;

	Person noh;
	noh.money = 5000;
	noh.addmoney(165000);
	noh.addshared(4000);
	cout << kim.sharedMoney << " " << noh.sharedMoney << " " << Person::sharedMoney << endl;	//��ü�ε�, Ŭ�����ε� ������ ������.

	square spongebob;
	circle jingjing;
	cout << square::getshape();	//���� 2��
}