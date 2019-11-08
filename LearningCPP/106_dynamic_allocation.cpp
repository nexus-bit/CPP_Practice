//동적 할당하는 방법을 알아보자
#include<iostream>
using namespace std;

int main() {
	int* p;			//포인터 선언
	p = new int;	//new!! 이 포인터는 동적 할당 입니다
	if (!p) {		//물론 할당 실패할 가능성은 희박함
		cout << "메모리 할당 실패";
		return 0;	//프로그램 종료
	}

	*p = 5;			//동적 할당된 공간 5로 초기화
	int n = *p;		//정적 할당된 공간에다 p 집어 넣기
	cout << "주소	p = " << p << endl;
	cout << "값	p = " << *p << endl;
	cout << "정적	n = " << n << endl;
	
	int* a = p;		//a는 p의 주소를 가짐
	cout << "a를 p와 연결시킴\n";
	cout << "주소	a = " << a << endl;
	cout << "값	a = " << *a << endl;

	delete p;		//동적 할당한 메모리를 풀어줌과 동시에 값도 없어짐
	cout << "동적 메모리 p 제거 후\n";
	cout << "주소	a = " << a << endl;
	cout << "값	a = " << *a << endl;
}
