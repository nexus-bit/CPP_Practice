//���� - 20190911 PT17p
#include <iostream>
using namespace std;

int main() {
	int i, j;
	int arr[4][7];
	for (i = 1; i <= 3; i++) {
		cout << i << "��° �л��� �й�, C++, JAVA, �ڷᱸ�� ���� �Է� >>";
		cin >> arr[i][1] >> arr[i][2] >> arr[i][3] >> arr[i][4];
		arr[i][5] = arr[i][2] + arr[i][3] + arr[i][4];
		arr[i][6] = arr[i][5] / 3;
	}
	cout << "\n�й�	C++	JAVA	�ڷᱸ	����	���	���\n";
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 6; j++) {
			cout << arr[i][j] << "	";
		}
		if (arr[i][6] >= 95)
			cout << "a+";
		else if (arr[i][6] >= 90)
			cout << "a0";
		else if (arr[i][6] >= 85)
			cout << "b+";
		else if (arr[i][6] >= 80)
			cout << "b0";
		else if (arr[i][6] >= 75)
			cout << "c+";
		else if (arr[i][6] >= 70)
			cout << "c0";
		else if (arr[i][6] >= 65)
			cout << "d+";
		else if (arr[i][6] >= 60)
			cout << "d0";
		else
			cout << "����";
		cout << '\n';
	}
}