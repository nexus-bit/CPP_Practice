//���� - 20190925 PT2_25p cstring ���
#include <iostream>
using namespace std;
//���⼭ �ָ��� ������ ���� [strcmp(char�迭��, "����") == 0]
//�迭�� �Էµ� ������ "����"�� �ٸ��� == �ƴϿ�(F) -> ���� ��ġ

////��� 1 - �α��� �����ϸ� ������ �ڵ尡 ������ ����
//int main() {
//	char ID[12];
//	char PW[12];
//	do{
//		cout << "ID �Է�>>";
//		cin >> ID;
//		if (strcmp(ID, "scott"))
//			cout << "���� ���̵� �Դϴ�\n";
//		else {
//			cout << "\nȯ���մϴ�\n";
//			cout << "Password>>";
//			cin >> PW;
//			if (strcmp(PW, "tiger"))
//				cout << "��й�ȣ�� Ʋ���ϴ�\nó��ȭ������ ���ư��ϴ�\n\n";
//		}
//	} while (strcmp(ID, "scott") || strcmp(PW, "tiger")); //or������ �ϳ��� T������ �ݺ�
//	cout << "0�� �Է��ϸ� �����մϴ�\nSQL>";
//	int exit;
//	cin >> exit;
//	return 0;
//}

//��� 2 - �α��� �����ϸ� ������ �ڵ尡 �߰�(if��)���� ��
int main() {
	char ID[12];
	char PW[12];
	cout << "exit ��ɾ� : ���α׷� ����\n";

	while (true){
		cout << "\nID �Է�>>";
		cin >> ID;
		if (strcmp(ID, "scott") == 0) {
			cout << "\nȯ���մϴ� " << ID << "!\n";
			cout << "Password>>";
			cin >> PW;
			if (strcmp(PW, "tiger") == 0) {
				cout << "\nSQL>";
				char data[30];
				cin >> data;
				/*������ �Է�*/
				cout << "������ �Է��� �Ϸ�Ǿ����ϴ�\n";
				break;
			}
			else if (strcmp(PW, "exit") == 0)
				break;
			else
				cout << "��й�ȣ�� Ʋ���ϴ�\nó��ȭ������ ���ư��ϴ�\n\n";
		}
		else if (strcmp(ID, "exit") == 0)
			break;
		else 
			cout << "���� ���̵� �Դϴ�\n";
	}
	cout << "���α׷��� �����մϴ�";
	return 0;
}