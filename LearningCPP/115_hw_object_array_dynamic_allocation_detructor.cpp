//20191113 PT4_27p 객체 배열의 동적 할당과 반환
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
	//기본 소멸자
};

int main() {
	cout << "생성하고자 하는 사각형의 개수";
	int n, length;
	cin >> n;

	Square* pointerarr = new Square[n]; //동적 객체 배열 생성
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번 사각형의 변의 길이 : ";
		cin >> length;
		pointerarr[i].setlength(length);
	}
	
	//카운트&출력 2가지 방법 - pointerarr라는 동적 할당된 객체 배열 자체를 ++하면 delete가 불가능(메모리 누수의 원인, 프로그램 종료되어야 반환됨)

	//방법 1 : 새로운 포인터(동적 메모리가 아닌 일반 포인터)를 통해 객체를 참조하자
	int count = 0;
	Square* p = pointerarr;
	for (int i = 0; i < n; i++) {
		cout << (p)->getArea() << ' ';
		if (p->getArea() >= 100 && (*p).getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "면적이 100~200 사이인 사각형의 갯수 : " << count << endl;

	//방법 2 : index를 통해 객체를 참조하자
	count = 0;
	int index = 0;
	for (int i = 0; i < n; i++) {
		cout << (pointerarr+index)->getArea() << ' ';
		if ((pointerarr+index)->getArea() >= 100 && (*(pointerarr+index)).getArea() <= 200)
			count++;
		index++;
	}
	cout << endl << "면적이 100~200 사이인 사각형의 갯수 : " << count << endl;

	delete[] pointerarr;
}