//�ּ�ó�� ctrl AKC ���� AKU
#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "������ �Է��ϼ��� : ";
	cin >> score;

	while (score > 100){
		cout << "�ùٸ� ���ڸ� �Է��Ͻÿ� : ";
		cin >> score;
		}

	if (score >= 90)
		cout << "��� A ����. �����մϴ�.";
	else if (score >= 80)
		cout << "��� B ����. �ƽ��׿�.";
	else if (score >= 70)
		cout << "��� C ����. �����ϼ���.";
	else if (score >= 60)
		cout << "��� D ����. F�� �ƴѰ� ����.";
	else
		cout << "��� F����. ������������";
		
	return 0;
}
