//���� ���� : ��, ������ ��ü �ܿ��� ����(����)�� ������ �� ����
#include<iostream>
using namespace std;

//char dat = 'd';
//
//char& ret() {	//c�� ���� ������
//	return dat;
//}
//
//int main() {
//	char a = ret();
//	cout << "a : " << a << endl;	//���� a�� dat�� ������ ���� ��
//
//	a = 'a';
//	cout << "a�� �� �ٲ� �� dat : " << dat << endl;	//a�� ���� �ٲپ dat�� ������� ����
//
//	char &ref = ret();	//���� ref�� dat�� ������ ��
//	cout << "ref : "<< ref << endl;	//���� ref ��½� dat�� ���� ��µ�
//
//	ref = 'r';
//	cout << "ref���� �ٲ� �� dat : " << dat << endl;	//dat�� ���� ref�� ���� �ٲٸ� ������ dat�� �ٲ�
//	
//	find() = 'f';	//find�Լ��� ���� ���� dat�� ���� �ٲ�
//	cout << "find�� ���� ���� dat�� ���� �ٲ� �� ���� ���� ref�� �� : " << ref << endl;
//}

char& find(char arr[], int index) {
	return arr[index];	//arr[i] ������ ����(����) ����
	//������ �����ϸ�, find�Լ��� arr[i]�� ���� �� �ش�
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S';	//find�� ���� name�� 0�� �ڸ��� ���� ���� S�� �ٲ�
	cout << name << endl;

	char& ref = find(name, 2);	//���� ref�� name�� 2�� �ڸ��� ������ ��
	ref = 'T';	//������ ���� �ٲ�
	cout << name << endl;	//������ ���� �ٲ�
}