//20191106 book94p_16 alphabet histogram_upgrade(know-how)
#include<iostream>
#include<Windows.h>				//how the roop goes?
using namespace std;				//sorry I can't translate them all.. ����� �����ϱ� �����Ƿ� �ѱ���� �ϰڽ��ϴ�

int isAlpha(char arr[])
{
	int i = 0; int sum = 0;
	int alphabet[26] = { 0 };		//a���� ���ʴ�� �迭�� ī��Ʈ([0]-a�ǰ���, [25]-z�ǰ���)
	while (arr[i] != NULL)			//���� �Է��� �����°����� ���� �ݺ� ����
	{
		int charindex = 97;			//a�� ���ڷ� ��ȯ�� 97(ASCII-Code)
		while (charindex <= 122)	//z���� �Էµ� ���� ���������� ��
		{
			if ((int(arr[i]) == charindex)||(int(arr[i]) == charindex - 32)) {	 //�Էµ� ���� a-z, A-Z���� ������ �ش��ϴ°�
				alphabet[(charindex - 97)] += 1;	//��ġ�ϴ� ��� alphabet�迭 �� ���� ī��Ʈ
													//ex)c�Է� -> a-z���� ���ư��� �� -> c�߰� -> alphabet[2]+=1 -> sum+=1
				sum += 1;		//���ĺ� ��������
			}
			charindex++;		//a-z���� ���ƾ� �ϹǷ� a + 1 = b�� �ǵ��� ���� ++
		}
		i++;					//�Է°��� �� ���ƾ� �ϹǷ� i++
	}
	//�� �۾��� �����ϸ� alphabet[]�迭�� a-z������ ������ ������ �Էµ�

	for (int i = 0; i < 26; i++) {									//���ĺ� ���� 26��
		cout << char(i + 97) << " > " << alphabet[i] << "	";		//ex) char(97+2) = c
		for (int j = 0; j < alphabet[i]; j++) {						//�� ����ϱ� ���� �ݺ���
			cout << "*"; Sleep(100);
		}
		puts(""); Sleep(50);										//��¿� �ణ�� �����̸� �־� ��̸� ����
	}
	return sum;
}


int main() {
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n";
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 3000������ �����մϴ�.\n";
	char text[3000] = { 0 };
	cin.getline(text, 3000, ';');

	cout << "�� ���ĺ��� > " << isAlpha(text);


	cout << "\n\n������ ������ ���� ���ϴ�\n"; //�ݺ����� � ������� ������ �����ϴ� �κ�
	cout << "-	 a b c d e f ~~~ y z\n";
	int loop = 1;
	while (loop <= 5) {
		cout << loop <<"������" << "	";
		for (int i = 0; i < 10; i++) {
			cout << "��";
			Sleep(100);
		}
		loop++;
		cout << "	��ġ�ϴ� ���ڿ� �迭�� ī��Ʈ+1" << endl;
	}
	cout << "....���� ���� ��ŭ �ݺ�\n";
}