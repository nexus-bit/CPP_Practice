//주석처리 ctrl AKC 해제 AKU
#include<iostream>
using namespace std;
#include<string>

int main() {
	string arr1("array");
	string arr2;
	cin >> arr2;
	string arr3("123456");

	if (arr1 == arr2)
		cout << "arr1과 arr2는 같습니다\n";
	else
		cout << "arr1과 arr2는 다릅니다\n";

	cout << arr3 << "\n" << arr3[3] << "\n";
}