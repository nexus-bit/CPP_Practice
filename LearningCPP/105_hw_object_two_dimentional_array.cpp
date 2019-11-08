//20191031 PT4_12p 이차원 객체 배열 변수를 초기화하는 네 가지 방법
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
	//방법 1 : 클래스의 변수를 직접 바꿔서 객체 변수 초기화(멤버변수가 public일경우만 가능)
	square bob[2][3]; //아직 선언만 했으므로 배열은 매개변수 없는 생성자(2)로 초기화
	//bob[0][0].length = 2; -> 매개 변수 없는 생성자가 있어서 저절로 2이다
	bob[0][1].length = 1;
	bob[0][2].length = 2;
	bob[1][0].length = 3;
	bob[1][1].length = 4;
	bob[1][2].length = 5;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "bob[" << i << "," << j << "]의 면적은 ";
			cout << bob[i][j].getArea() << endl;
		}
	}
	puts("");

	//방법 2 : 클래스의 함수를 통해 객체 변수 초기화
	square nemo[2][3]; //아직 선언만 했으므로 배열은 매개변수 없는 생성자(2)로 초기화
	//nemo[0][0].setLength; -> 매개 변수 없는 생성자가 있어서 저절로 2이다
	nemo[0][1].setLength(1);
	nemo[0][2].setLength(2);
	nemo[1][0].setLength(3);
	nemo[1][1].setLength(4);
	nemo[1][2].setLength(5);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "nemo[" << i << "," << j << "]의 면적은 ";
			cout << nemo[i][j].getArea() << endl;
		}
	}
	puts("");

	//방법 3 : 처음에 배열 객체 생성시 생성자를 직접 호출해 객체를 하나하나 만들어서 변수 초기화
	square sponge[2][3] = 
	{ {square(), square(1), square(2)}, {square(3),square(4), square(5)} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "sopnge[" << i << "," << j << "]의 면적은 ";
			cout << sponge[i][j].getArea() << endl;
		}
	}
	puts("");

	//방법 4 : 생성자로 초기화, 따로 초기화 안함
	square 생성자[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "생성자[" << i << "," << j << "]의 면적은 ";
			cout << 생성자[i][j].getArea() << endl;
		}
	}

}