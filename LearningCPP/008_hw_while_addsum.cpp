//과제 - 20190911 PT11p
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

	int i = a;
	while (i <= b) {
		sum += i;
		mult *= i;
		i++;
	}

	cout << a << "에서 " << b << "까지 합은 " << sum << "\n";
	cout << a << "에서 " << b << "까지 곱은 " << mult;
	return 0;
}
