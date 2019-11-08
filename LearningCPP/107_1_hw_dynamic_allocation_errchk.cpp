//20191031 PT4_17p 동적 할당 주의사항
#include<iostream>
using namespace std;

int main() {
	//에러1 : 동적 할당이 아니라 delete를 사용 불가 - 해결 : 동적 할당
	int n = 123456;
	int* p = new int; //new 추가 : 동적 할당
	*p = n; //n의 값으로초기화
	n = *p;
	delete p; //동적 할당 메모리 반환

	//에러2 : 메모리 반환을 두번 했을 경우 - 해결 : 한번만 반환하기
	int* po = new int;
	//delete po;
	delete po;
}