//과제 - 20190918 PT1.5_26p 2차원 배열로 처리
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
		cout << "학번" << a[i][0] << " 점수" << a[i][1] << "\n";
}

int main() {
	int arr[5][2]; //0~4행 0~2열
	for (int i = 0; i < 5; i++) {
		cout << i + 1 <<  "번째 학생의 학점과 점수를 입력하세요 >>";
		cin >> arr[i][0] >> arr[i][1];
	}
	int sum = sumarray(arr, 5);
	makesort(arr, 5);
	cout << "-----------성적순위----------\n";
	printarray(arr, 5);
	cout << "5명 성적의 합은 " << sum << ", 평균은 " << sum / 5
		<< ", 최대점수는 " << arr[0][1] << ", 최소점수는 " << arr[4][1];
	
	cout << "\n사용한 배열의 모습\n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << arr[i][j] << " ";
		puts("");
	}
}