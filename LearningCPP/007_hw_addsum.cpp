//과제 - 20190911 PT10p
#include <iostream>
using namespace std;

int main() {
	int a, b, temp;
	int mult = 1;
	int sum = 0;
	cout << "두 개의 정수 입력>>";
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

	cout << a << "에서 " << b << "까지 합은 " << sum << "\n";
	cout << a << "에서 " << b << "까지 곱은 " << mult;
	return 0;
}
