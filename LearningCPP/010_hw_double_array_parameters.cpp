//���� - 20190918 PT1.5_26p 2���� �迭�� ó��
#include <iostream>
using namespace std;

int sumarray(int a[][2], int inwon)//
{
	int add = 0;
	for (int i = 0; i < inwon; i++)
		add = add + a[i][1];
	return add;
}
void makesort(int a[][2], int inwon)
{
	int temp = 0;
	for (int i = 0; i < inwon - 1; i++)
		for (int j = i+1; j < inwon; j++)
			if (a[i][1] < a[j][1])
			{
				temp = a[i][0]; a[i][0] = a[j][0]; a[j][0] = temp;
				temp = a[i][1]; a[i][1] = a[j][1]; a[j][1] = temp;
			}
}
void printarray(int a[][2], int inwon)
{
	for (int i = 0; i < 5; i++)
		cout << "�й�" << a[i][0] << " ����" << a[i][1] << "\n";
}

int main() {
	int arr[5][2]; //0~4�� 0~2��
	for (int i = 0; i < 5; i++) {
		cout << i + 1 <<  "��° �л��� ������ ������ �Է��ϼ��� >>";
		cin >> arr[i][0] >> arr[i][1];
	}
	int sum = sumarray(arr, 5);
	makesort(arr, 5);
	cout << "-----------��������----------\n";
	printarray(arr, 5);
	cout << "5�� ������ ���� " << sum << ", ����� " << sum / 5
		<< ", �ִ������� " << arr[0][1] << ", �ּ������� " << arr[4][1];
	
	cout << "\n����� �迭�� ���\n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << arr[i][j] << " ";
		puts("");
	}
}