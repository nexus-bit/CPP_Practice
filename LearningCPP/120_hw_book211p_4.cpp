//20191114 book211p_4 make class complete Ŭ���� �ϼ��ϱ�
#include<iostream>
using namespace std;

class Sample {
	int* p;
	int size;
	int biggest = 0;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read() {
		cout << size <<"�� ���� �迭 �Է� >";
		for (int i = 0; i < size; i++) {
			cin >> *(p + i);
		}
	}
	void write() {
		for (int i = 0; i < size; i++) {
			cout << *(p + i) << " ";
		}
	}
	int big() {
		for (int i = 0; i < size; i++) {
			if (biggest < *(p + i))
				biggest = *(p + i);
		}
		return biggest;
	}
};

int main() {
	Sample s(10);
	s.read();//Ű���忡�� �����迭�б�
	s.write();//�����迭���
	cout << "\n���� ū ���� " << s.big() << endl;

}

