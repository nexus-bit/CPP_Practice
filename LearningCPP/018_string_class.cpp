//�ּ�ó�� ctrl AKC ���� AKU
#include<iostream>
using namespace std;
#include<string>

int main() {
	string arr1("array");
	string arr2;
	cin >> arr2;
	string arr3("123456");

	if (arr1 == arr2)
		cout << "arr1�� arr2�� �����ϴ�\n";
	else
		cout << "arr1�� arr2�� �ٸ��ϴ�\n";

	cout << arr3 << "\n" << arr3[3] << "\n";
}