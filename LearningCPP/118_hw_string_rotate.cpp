//20191113 PT4_39p ���ڿ� �ϳ��� �̵��ϱ�
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s("Knut Hong Gil Dong");	//18��
	int len = s.length();
	cout << s << endl;
	for (int i = 0; i < len; i++) {		//������ŭ �ݺ�
		string last = s.substr(len - 1, 1);	//�迭 ������ 1��, 1����������
		string sub = s.substr(0, len - 1);	//0���� ����-1��, �������� ���� ����
		//substr(A, B)���� A:�迭ó�� 0���� n-1�� ����, B:�׳� ���ڶ� �״�� ������ ��
		s = last + sub;
		cout << s << endl;
	}
}