//�ּ�ó�� ctrl AKC ���� AKU
#include <iostream> 
using namespace std;

int main() {
	int a, b, sum = 0;
	cout << "�� ���� ���� �Է�>>";
	cin >> a >> b;
	
	if (a > b)  //ū�� ���� �Է¹������ �ٲ��ִ� �۾� �ʿ�
	{
		int temp = a;
		a = b;
		b = temp;
	}

	int i = a;
	while (i <= b) // i�� b���� �۰ų� ���� ���� �ݺ� 
	{
		sum += i;
		i++;
	}
	cout << a << "���� " << b << "���� ���� " << sum;
}