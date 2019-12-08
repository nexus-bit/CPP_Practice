//20191205 PT8_31p ��� �� �������� : private
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
private:
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;	//Derive ������ ��ü ����
	x.a = 5;	//main�Լ����� AŬ������ private�� ��� a ���� X	-> ���� private���� ���� ��� ���� ������ �ٲپ ���� �Ұ�
	x.setA(7);	//main�Լ����� AŬ������ private�� setB() ���� X	-> protected�� ��� ���� ������ ���� private�� �� -> ���� protected ���� ���� ��� ���� ������ �ٲپ ���� �Ұ�
	x.showA();	//main�Լ����� AŬ������ private�� showA() ���� X	-> public�� ��� ���� ������ ���� private�� �� -> ��� �� :public base�� �ٲٸ� ��
	x.b = 10;	//main�Լ����� BŬ������ private�� ��� b ���� X	-> ���� �Լ����� private�� ���� ���� �Ұ�
	x.setB(10);	//main�Լ����� BŬ������ protected�� setB() ���� X	-> ���� �Լ����� protected�� ���� �Ұ� -> protected�� �ڽĸ� ���� ����
	x.showB();	//main�Լ����� BŬ������ public�� showB() ���� ����	-> ���� �Լ��� �����ؼ� �ܺ� ���� public�� ������ ������

	//��� : ��ӽ� ���� ������ private
	//�θ�			��ӽ� ����		�ܺο��� ������ �θ��� ���� ������
	//public	->	(private)	->	private
	//protected	->	(private)	->	private
	//private	->	(private)	->	private
}