//���� �Ҵ��ϴ� ����� �˾ƺ���
#include<iostream>
using namespace std;

int main() {
	int* p;			//������ ����
	p = new int;	//new!! �� �����ʹ� ���� �Ҵ� �Դϴ�
	if (!p) {		//���� �Ҵ� ������ ���ɼ��� �����
		cout << "�޸� �Ҵ� ����";
		return 0;	//���α׷� ����
	}

	*p = 5;			//���� �Ҵ�� ���� 5�� �ʱ�ȭ
	int n = *p;		//���� �Ҵ�� �������� p ���� �ֱ�
	cout << "�ּ�	p = " << p << endl;
	cout << "��	p = " << *p << endl;
	cout << "����	n = " << n << endl;
	
	int* a = p;		//a�� p�� �ּҸ� ����
	cout << "a�� p�� �����Ŵ\n";
	cout << "�ּ�	a = " << a << endl;
	cout << "��	a = " << *a << endl;

	delete p;		//���� �Ҵ��� �޸𸮸� Ǯ���ܰ� ���ÿ� ���� ������
	cout << "���� �޸� p ���� ��\n";
	cout << "�ּ�	a = " << a << endl;
	cout << "��	a = " << *a << endl;
}
