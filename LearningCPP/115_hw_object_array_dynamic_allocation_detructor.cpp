//20191113 PT4_27p ��ü �迭�� ���� �Ҵ�� ��ȯ
#include<iostream>
using namespace std;

class Square {
	int length;
public:
	Square() {
		length = 1;
	}
	void setlength(int r) {
		length = r;
	}
	double getArea() {
		return length * length;
	}
	//�⺻ �Ҹ���
};

int main() {
	cout << "�����ϰ��� �ϴ� �簢���� ����";
	int n, length;
	cin >> n;

	Square* pointerarr = new Square[n]; //���� ��ü �迭 ����
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "�� �簢���� ���� ���� : ";
		cin >> length;
		pointerarr[i].setlength(length);
	}
	
	//ī��Ʈ&��� 2���� ��� - pointerarr��� ���� �Ҵ�� ��ü �迭 ��ü�� ++�ϸ� delete�� �Ұ���(�޸� ������ ����, ���α׷� ����Ǿ�� ��ȯ��)

	//��� 1 : ���ο� ������(���� �޸𸮰� �ƴ� �Ϲ� ������)�� ���� ��ü�� ��������
	int count = 0;
	Square* p = pointerarr;
	for (int i = 0; i < n; i++) {
		cout << (p)->getArea() << ' ';
		if (p->getArea() >= 100 && (*p).getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "������ 100~200 ������ �簢���� ���� : " << count << endl;

	//��� 2 : index�� ���� ��ü�� ��������
	count = 0;
	int index = 0;
	for (int i = 0; i < n; i++) {
		cout << (pointerarr+index)->getArea() << ' ';
		if ((pointerarr+index)->getArea() >= 100 && (*(pointerarr+index)).getArea() <= 200)
			count++;
		index++;
	}
	cout << endl << "������ 100~200 ������ �簢���� ���� : " << count << endl;

	delete[] pointerarr;
}