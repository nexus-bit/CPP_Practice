//과제 - 20190918 PT1.5_26p
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
		cout << "학번" << a[i] << " 점수" << b[i] << "\n";
}

int main() {
	int id[5] = { 0 };
	int score[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		cout << i + 1 <<  "번째 학생의 학점과 점수를 입력하세요 >>";
		cin >> id[i] >> score[i];
	}
	int sum = sumarray(score, 5);
	makesort(id, score, 5);
	cout << "-----------성적순위----------\n";
	printarray(id, score, 5);
	cout << "5명 성적의 합은 " << sum << ", 평균은 " << sum / 5
		<< ", 최대점수는 " << score[0] << ", 최소점수는 " << score[4];
}