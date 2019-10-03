//주석처리 ctrl AKC 해제 AKU
#include <iostream> 
using namespace std;

int main() {
	int a, b, sum = 0;
	cout << "두 개의 정수 입력>>";
	cin >> a >> b;
	
	if (a > b)  //큰수 먼저 입력받을경우 바꿔주는 작업 필요
	{
		int temp = a;
		a = b;
		b = temp;
	}

	int i = a;
	while (i <= b) // i가 b보다 작거나 같은 동안 반복 
	{
		sum += i;
		i++;
	}
	cout << a << "에서 " << b << "까지 합은 " << sum;
}