//���� - 20190925 PT2_27p getline() ���
#include <iostream>
#include <iomanip>
//<iomanip> - cout<<float����<<setprecision(4)�� ��밡�� - ���ڳװ�ǥ��
using namespace std;
//���⼭ �ָ��� �Լ��� cin.getline(address, 100, 'a') - ����:"ū����X" '��������O'
//address �迭�� a�� ���ö����� �Է¹���(�����̽��ٸ� �����ִ�)

int main() {
	char id[8];
	cout << "�й�>>";
	cin.getline(id, 8, '\n');

	char info[15];
	cout << "�а��� �̸�>>";
	cin.getline(info, 15, '\n');

	float sco[5] = { 0 };
	cout << "C++����>>";
	cin >> sco[0];
	cout << "Java����>>";
	cin >> sco[1];
	cout << "DS����>>";
	cin >> sco[2];
	sco[3] = sco[0] + sco[1] + sco[2];
	sco[4] = sco[3] / 3;

	cout << "\n�й�	�̸�		C++	Java	DS	����	���" 
		<<"\n-------------------------------------------------------------\n"
		<< id << "	" << info << "	";
	for (int i = 0; i < 4; i++)
		cout << sco[i] << "	";
	cout << setprecision(4) << sco[4] ;  //ǥ�����ڸ� 4���� ����(���ӵ�)

	return 0;
}