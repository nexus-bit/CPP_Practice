//��� �� �������� : public
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

class Derived : public Base {
	//�ܺο��� Base�� ��� ����� public�� ���� - (protected, private ����) - �׳� ����ϴ°��ϰ� ���� ����
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
	x.setA(7);	//main�Լ����� AŬ������ protected�� setB() ���� X	-> ���� protected ���� ���� ��� ���� ������ �ٲپ ���� �Ұ�
	x.showA();	//main�Լ����� AŬ������ public�� showA() ���� ����	-> public�� ���� ������ public�� ���� public�� �״��. �ܺ� ���� public�� ������ ������
	x.b = 10;	//main�Լ����� BŬ������ private�� ��� b ���� X	-> ���� �Լ����� private�� ���� ���� �Ұ�
	x.setB(10);	//main�Լ����� BŬ������ protected�� setB() ���� X	-> ���� �Լ����� protected�� ���� �Ұ� -> protected�� �ڽĸ� ���� ����
	x.showB();	//main�Լ����� BŬ������ public�� showB() ���� ����	-> ���� �Լ��� �����ؼ� �ܺ� ���� public�� ������ ������

	//��� : ��ӽ� ���� ������ public
	//�θ�			��ӽ� ����		�ܺο��� ������ �θ��� ���� ������
	//public	->	(public)	->	public
	//protected	->	(public)	->	protected
	//private	->	(public)	->	private
}
