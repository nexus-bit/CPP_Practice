//20191114 PT4_40p ���ڿ��� ����ϱ�
#include<iostream>
#include<string>
using namespace std;

//�ִ� 4�������� �����
int main() {
	string s;
	cout << "123-234-54-129ó�� ���� ���ڿ� �Է�(4�������� ���)\n>-";
	getline(cin, s, '\n');
	int plusindex = 0;//'-'�� ã�� ��ġ
	int mid = 0; //���ݱ��� ����� �κ�
	int sum = 0; //����� ����
	int control = 1; //���� �ִ� �װ� ��Ʈ��
	string temp(""); //�ӽ÷� �����ؼ� sum�� ���� �ӽ� ��Ʈ��

	while (control <= 4) {
		//������ ������ ��� - ������ '-'�� ����
		if (s.find('-', mid) > 1000) { //���̻� '-'�� ��ã���� ���ǿ� �ش�
			temp = s.substr(mid, 10); //������ NULL���� ��µǳ�������, �׳� 10�� ���

			sum = sum - stoi(temp);
			cout << "ó�� : " << temp << ", sum-> " << sum << endl;
			break; //������ ���� ����� ����
		}

		//������ ���ڰ� �ƴ� �ٸ� ���ڵ�, '-'�� ã�� �� ���� ����.
		plusindex = s.find('-', mid); //���ݲ� ����� �� ���Ŀ� �ִ� '-' ã��(�ʱ��ϰ�� 0����)
		temp = s.substr(mid, plusindex-mid); //���ݲ� ����Ѱ��� ���ĺ��� '-' �������� �ڸ� - ������ ����

		mid = plusindex + 1; //���� ����� �κ��� ��� ����� '-'�� ��ġ �ڷ� ����

		sum = sum - stoi(temp);
		cout << "ó�� : " << temp << ", sum-> " << sum << endl;
		control = control + 1; //����� Ƚ��
	}
}

////�������� ���α׷�
//int main() {
//	string s;
//	cout << "123+234+54+129ó�� ���� ���ڿ� �Է�\n>";
//	getline(cin, s, '\n');
//	int plusindex = 0;//+�� ã�� ��ġ
//	int mid = 0; //���ݱ��� ����� �κ�
//	int sum = 0; //����� ����
//	string temp(""); //�ӽ÷� �����ؼ� sum�� ���� �ӽ� ��Ʈ��
//
//	while (1) {
//		//������ ������ ��� - ������ +�� ����
//		if (s.find('+', mid) > 1000) { //���̻� +�� ��ã���� ���ǿ� �ش�
//			temp = s.substr(mid, 10); //������ NULL���� ��µǳ�������, �׳� 10�� ���
//
//			sum = sum + stoi(temp);
//			cout << "ó�� : " << temp << ", sum-> " << sum << endl;
//			break; //������ ���� ����� ����
//		}
//
//		//������ ���ڰ� �ƴ� �ٸ� ���ڵ�, +�� ã�� �� ���� ����.
//		plusindex = s.find('+', mid); //���ݲ� ����� �� ���Ŀ� �ִ� '+' ã��(�ʱ��ϰ�� 0����)
//		temp = s.substr(mid, plusindex-mid); //���ݲ� ����Ѱ��� ���ĺ��� '+' �������� �ڸ� - ������ ����
//
//		mid = plusindex + 1; //���� ����� �κ��� ��� ����� +�� ��ġ �ڷ� ����
//
//		sum = sum + stoi(temp);
//		cout << "ó�� : " << temp << ", sum-> " << sum << endl;
//	}
//}