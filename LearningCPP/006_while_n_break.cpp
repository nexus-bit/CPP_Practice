//�ּ�ó�� ctrl AKC ���� AKU
#include <iostream>
using namespace std;

int main(){
	int a;
	int input, sum = 0;
	while (true){
		cout << "¦���� ������ ���� �Է�, 0�Է½� ����>";
		cin >> input;
		if (input == 0)
			break; //0�Է½� while�� Ż��
		else if (input % 2 == 0)
			continue; //¦���� �ԷµǸ� ���簪 ���� �ߴ� �� ������ ������ �Ѿ
		sum += input;
		cout << "��������" << sum << "�Դϴ�.\n";
	}
	cout << "0�� �Է¹޾� ���α׷��� �����մϴ�";
}