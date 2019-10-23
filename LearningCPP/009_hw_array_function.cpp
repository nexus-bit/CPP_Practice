//making it with function
#include<iostream>
using namespace std;

void sumArray(int a[][6], int inwon) {
	for (int i = 0; i < inwon; i++) {
		for (int j = 1; j < 4; j++)
			a[i][4] += a[i][j];
		a[i][5] = a[i][4] / inwon;
	}
}

void printArray(int a[][6], int inwon) {
	for (int i = 0; i < inwon; i++) {
		for (int j = 0; j < 6; j++) {
			cout << a[i][j] << "	";
		}
		puts("");
	}
}

int main() {
	int array[3][6] = { 0 };
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "(th) student's number, java, c++, python score : ";
		cin >> array[i][0] >> array[i][1] >> array[i][2] >> array[i][3];
	}
	sumArray(array, 3);
	printArray(array, 3);
}


