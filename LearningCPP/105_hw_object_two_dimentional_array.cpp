//20191031 PT4_12p ������ ��ü �迭 ������ �ʱ�ȭ�ϴ� �� ���� ���
#include<iostream>
using namespace std;

class square {
public:
	int length;
	square() { length = 2; }
	square(int l) { length = l; }
	void setLength(int l) { length = l; }
	double getArea() { return length * length; }
};

int main() {
	//��� 1 : Ŭ������ ������ ���� �ٲ㼭 ��ü ���� �ʱ�ȭ(��������� public�ϰ�츸 ����)
	square bob[2][3]; //���� ���� �����Ƿ� �迭�� �Ű����� ���� ������(2)�� �ʱ�ȭ
	//bob[0][0].length = 2; -> �Ű� ���� ���� �����ڰ� �־ ������ 2�̴�
	bob[0][1].length = 1;
	bob[0][2].length = 2;
	bob[1][0].length = 3;
	bob[1][1].length = 4;
	bob[1][2].length = 5;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "bob[" << i << "," << j << "]�� ������ ";
			cout << bob[i][j].getArea() << endl;
		}
	}
	puts("");

	//��� 2 : Ŭ������ �Լ��� ���� ��ü ���� �ʱ�ȭ
	square nemo[2][3]; //���� ���� �����Ƿ� �迭�� �Ű����� ���� ������(2)�� �ʱ�ȭ
	//nemo[0][0].setLength; -> �Ű� ���� ���� �����ڰ� �־ ������ 2�̴�
	nemo[0][1].setLength(1);
	nemo[0][2].setLength(2);
	nemo[1][0].setLength(3);
	nemo[1][1].setLength(4);
	nemo[1][2].setLength(5);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "nemo[" << i << "," << j << "]�� ������ ";
			cout << nemo[i][j].getArea() << endl;
		}
	}
	puts("");

	//��� 3 : ó���� �迭 ��ü ������ �����ڸ� ���� ȣ���� ��ü�� �ϳ��ϳ� ���� ���� �ʱ�ȭ
	square sponge[2][3] = 
	{ {square(), square(1), square(2)}, {square(3),square(4), square(5)} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "sopnge[" << i << "," << j << "]�� ������ ";
			cout << sponge[i][j].getArea() << endl;
		}
	}
	puts("");

	//��� 4 : �����ڷ� �ʱ�ȭ, ���� �ʱ�ȭ ����
	square ������[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "������[" << i << "," << j << "]�� ������ ";
			cout << ������[i][j].getArea() << endl;
		}
	}

}