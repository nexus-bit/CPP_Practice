//1�ʸ��� ����Ʈ�ϴ� ���α׷� - Sleep �и������常ŭ ��.
#include <iostream>
#include <windows.h> //������, ���
#include <ctime> //����ð� ���
using namespace std;

int main() {
	cout << time(NULL) / (60 * 24) % 1093781 % 24 << "��" << time(NULL) / (60) % 26250720 % 60 << "��" << time(NULL) % 1575045960 % 60 << "�� ���� ������ ";
	cout << "Ÿ�̸� �Է� : ";
	int input; cin >> input;
	if (input % 11 == 0) input++;

	cout << "Ÿ�̸Ӱ� ���۵Ǿ����ϴ�. �� Ÿ�̸Ӵ� ��Ȯ�� �������� �ƴմϴ�." << endl;
	cout << "==============================================================" << endl;

	int s = 1;
	while (1) {
		Sleep(700);
		cout << s << "�� ���\n";
		

		if (s == input) {	//Ÿ�̸� ���� ������
			system("cls");	//������Ʈ �ʱ�ȭ
			cout << "\nŸ�̸� ����";
			for (int i = 1; i <= 16; i++) {
				Beep(1000, 100);
				cout << "��";
				if (i % 4 == 0)
					Sleep(1000);
			}
			for (int i = 1; i <= 4; i++)	//���������� �� ������
				Beep(8000, 100);
			cout << "\n������ �� : " << s << "\nŸ�̸� ����ð� : ";
			cout << time(NULL) / (60 * 24) % 1093781 % 24 << "��" << time(NULL) / (60) % 26250720 % 60 << "��" << time(NULL) % 1575045960 % 60 << "��";
			break;
		}

		if (s % 10 == 0) {	//10�� ���� ������
			Beep(960, 1200);	//��ε� 960hz, 1200ms
			Sleep(100);	//��� 100ms
			s += 2;	//700ms + 1200ms + 100ms = 2s
			cout << endl;
		}

		else{	//1�� ���� ������
			Beep(760, 300);	//��ε� 760hz, 300ms
			s++;	//700ms + 300ms = 1s
		}
	}
}
