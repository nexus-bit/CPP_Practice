//���� - 20190918 PT1.5_26p
#include <iostream>
using namespace std;

int sumarray(int a[], int size)
{
	int add = 0;
	for (int i = 0; i < size; i++)
		add = add + a[i];
	return add;
}
void makesort(int a[], int b[], int size)
{
	int atemp, btemp = 0;
	for (int i = 0; i < size - 1; i++)
		for (int j = i+1; j < size; j++)
			if (b[i] < b[j])
			{
				atemp = a[i]; a[i] = a[j]; a[j] = atemp;
				btemp = b[i]; b[i] = b[j]; b[j] = btemp;
			}
}
void printarray(int a[], int b[], int size)
{
	for (int i = 0; i < 5; i++)
		cout << "�й�" << a[i] << " ����" << b[i] << "\n";
}

int main() {
	int id[5] = { 0 };
	int score[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		cout << i + 1 <<  "��° �л��� ������ ������ �Է��ϼ��� >>";
		cin >> id[i] >> score[i];
	}
	int sum = sumarray(score, 5);
	makesort(id, score, 5);
	cout << "-----------��������----------\n";
	printarray(id, score, 5);
	cout << "5�� ������ ���� " << sum << ", ����� " << sum / 5
		<< ", �ִ������� " << score[0] << ", �ּ������� " << score[4];
}