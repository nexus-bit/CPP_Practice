//과제 - 20190926 book52p_4 ****만들기
#include<iostream>
using namespace std;

int main(){
	cout << "몇 줄을 만들까요>";
	int line;
	cin >> line;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j <= i; j++)
			cout << "*";
		puts("");
	}
}