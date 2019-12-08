//20191205 PT8_33p ��ø ��� ��(���θ�) ��������, 144~146���� �߿�
#include<iostream>
using namespace std;

class Base {
private:
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	//�ܺο��� Base�� ��� ����� private�� ����
	//Derived������ Base�� protected ���� ���� ����
	//Derived�� �ڽ�(Base�� ����)�� Base�� ��� ����� private�� ����
private:
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(5);	//protected ������ setA(int a) �Լ��� ���� ����
		showA();	//public ������ showA() �Լ��� ���� ����
		cout << b;
	}
};

class GrandDerived : private Derived {
	//�ܺο��� ���� Ŭ�������� ��� ����� private�� ����
	//GrandDerived������ ���� Ŭ�������� protected ���� ���� ����
private:
	int c;
protected:
	void setAB(int x) {
		setA(x);	//�ڼ��ڴ� �Ҿƹ����� protected�� ���� �Ұ�(�ڽĸ� ����)
		showA();	//�ڼ��ڴ� �Ҿƹ����� protected�� ���� �Ұ�(�ڽĸ� ����)
		setB(x);	//�ڽ��� �θ��� protected�� ���� ����
	}
};

int main() {
	cout << "���α׷� �۵�" << endl;
}