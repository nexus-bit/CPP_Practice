//20191031 PT4_19p
#include<iostream>
using namespace std;

int main() {
	cout << "�Է��� �л��� ������ �� �ڷ��Դϱ�?>>";
	int n;
	cin >> n;

	int* p = new int[8]; //��1���� �迭�� ���� �Ҵ� �����

	int** arr = new int * [5]; //��2���� �迭�� ���� �Ҵ� �����
	for (int i = 0; i < 5; i++)//5���� n��
		arr[i] = new int[n];

	if (!arr) {
		cout << "�޸� �Ҵ� ����"; return 0;
	}
	
	for (int i = 0; i < n; i++) { //���� �Է°� ���
		cout << i+1 << ": �й�, �ڹ�, c++ ������ ������� �Է��ϼ���.\n>>";
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		arr[i][3] = arr[i][1] + arr[i][2];
		arr[i][4] = arr[i][3] / 2;
	}

	cout << "�й�	�ڹ�	c++	����	���\n";
	for (int i = 0; i < n; i++) { //���� ���
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << "	";
		}
		puts("");
	}
	delete[] p;//�ڸ޸� ��ȯ��
	delete[] *arr;//�ڸ޸� ��ȯ��
}
