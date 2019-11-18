//20191114 book211p_4 make class complete 클래스 완성하기
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
		cout << size <<"개 정수 배열 입력 >";
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
	s.read();//키보드에서 정수배열읽기
	s.write();//정수배열출력
	cout << "\n가장 큰 수는 " << s.big() << endl;

}

