//���� - 20190911 PT11p
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

	int i = a;
	while (i <= b) {
		sum += i;
		mult *= i;
		i++;
	}

	cout << a << "���� " << b << "���� ���� " << sum << "\n";
	cout << a << "���� " << b << "���� ���� " << mult;
	return 0;
}
