//���� - 20190926 book52p_4 ****�����
#include<iostream>
using namespace std;

int main(){
	cout << "�� ���� ������>";
	int line;
	cin >> line;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j <= i; j++)
			cout << "*";
		puts("");
	}
}