//���� - 20190911 PT10p
#include <iostream>
using namespace std;

int main() {
	int a, b, temp;
	int mult = 1;
	int sum = 0;
	cout << "�� ���� ���� �Է�>>";
	cin >> a >> b;

	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	for (int i = a; i <= b; i++) {
		sum += i;
		mult *= i;
	}

	cout << a << "���� " << b << "���� ���� " << sum << "\n";
	cout << a << "���� " << b << "���� ���� " << mult;
	return 0;
}
