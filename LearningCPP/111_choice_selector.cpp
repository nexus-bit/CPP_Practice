#include<iostream>	//�⺻
#include<ctime>	//�����Լ�
//#include<iomanip>	- getline
#include<windows.h>	//sleep
using namespace std;

int main() {
	//���� �޴� �Է��ϱ�
	cout << "������ �����Ͻðڽ��ϱ�?\n>";
	char title[50];
	cin.getline(title, 50, '\n');
	cout << "�������� ��� �Դϱ�? : ";
	int select;
	cin >> select;

	//������ �Է��ϱ�
	char answer[10][50] = { NULL };
	cin.getline(answer[0], 50, '\n'); //ù ��° ������ ������ �׳� �߰���
	for (int i = 0; i < select; i++) {
		cout << i + 1 << "��° �׸� : ";
		cin.getline(answer[i], 50, '\n');

	}

intro: //goto�� �ε���
	//������ ���
	Sleep(500);
	cout << "\n...\n";
	Sleep(1000);
	char say[36] = { "������ ����� �����Ͽ� �����մϴ�.\n" }; //string - Sleep()�� ����
	for (int i = 0; i < 35; i++) {
		cout << say[i];
		Sleep(50);
	}

	//���� ����
	srand((unsigned int)time(NULL));
	int num = rand()%select;
	cout << num + 1 << "�� �׸� : ";
	for (int j = 0; j < 50; j++)
		cout << answer[num][j];

	//����� �Է�
	cout << "\n����� �޾Ƶ��̽÷��� ����������, �ٽ� �Ϸ��� ���ٽá����Է��ϼ���\n>";
	char end[5];
	cin >> end;
	if (strcmp(end, "�ٽ�") == 0)
		goto intro;
}