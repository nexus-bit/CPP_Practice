//�ּ�ó�� ctrl AKC ���� AKU
#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "������ �Է��ϼ��� : ";
	cin >> score;
	while (score > 100) {
		cout << "�ٽ��Է��ϼ��� : ";
		cin >> score;
	}
	int div = score / 10; //90���̸� div>9
	switch (div) //div ���ڰ� ������ ���
	{
		case 10: //div�� 10�� ����
		case 9: //div�� 9���� �� ��� > A
			cout << "A�Դϴ�."; //���ȣ �ʿ�X
			break; //���ߴܽ��Ѿ� �ԡ�
		case 8:
			cout << "B�Դϴ�";
			break;
		case 7:
			cout << "C�Դϴ�.";
			break;
		default: //����Ʈ��(�׿�����)
			cout << "�̷� ��û��";
			break;
	}
	//return 0;
}