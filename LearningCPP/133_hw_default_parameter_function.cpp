//20191121 �Լ��� �Ű����� 1 : ����Ʈ���� X, �Ű����� 2 ,3 :  ����Ʈ����. 4���� ������ �ﰢ�� �׸���
#include<iostream>
using namespace std;

void func(char c, int line = 1, int shape = 1) {
	switch (shape) {
	case 1:
		for (int i = 1; i <= line; i++) {
			for (int j = line; j > i; j--)
				cout << "	";
			for (int k = 0; k < i; k++)
				cout << c << "	";
			puts("");
		}
		puts("");
		break;
	case 2:
		for (int i = 1; i <= line; i++) {
			for (int j = 0; j < i; j++)
				cout << c << "	";
			puts("");
		}
		puts("");
		break;
	case 3:
		for (int i = line; i > 0; i--) {
			for (int j = line; j > i; j--)
				cout << "	";
			for (int k = 0; k < i; k++)
				cout << c << "	";
			puts("");
		}
		puts("");
		break;
	case 4:
		for (int i = line; i > 0; i--) {
			for (int j = 0; j < i; j++)
				cout << c << "	";
			puts("");
		}
		puts("");
		break;
	}

}

int main() {
	func('1', 7, 1);
	func('2', 7, 2);
	func('3', 7, 3);
	func('4', 7, 4);
	func('$', 10);
	func('@');
}