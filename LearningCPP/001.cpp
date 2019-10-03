//주석처리 ctrl AKC 해제 AKU
#include <iostream>
using namespace std; /*이거 없으면 std:: 매번붙임*/

int g = 20; //전역변수 : 모든 함수에서 쓸수있음
int add(int x, int y) //전역함수 : 모든 함수에서 쓸수있음
{	
	return x + y;
}

int main() {
	int a, b, sum; //변수 지정
	cout << "숫자 두개를 입력하세요.\n";
	cin >> a >> b; //입력
	sum = add(a, b); //계산
	cout << "합은 " << sum << " 입니다.\n"; //출력
	cout << "전역변수의 값은 " << g << " 입니다.\n";

	g = g << 1; //전역변수 왼쪽 시프트 1번(변수 수정>40)
	int f = g << 2; //전역변수 왼쪽 시프트 2번(80>160)
	int h = g >> 1; //전역변수 오른쪽 시프트 1번(40>20)
	cout << g << " " << f << " " << h << "\n";

	cout << (g != h) << "\n"; //g는 h랑 다르기 때문에 true값(>1)
	cout << ((f > h) ? f : h) << "\n"; //f, h 중 큰수출력(160>20)
	cout << sizeof(3.141595) << "\n"; //문자 타입 사이즈(8)
	cout << (f + h, f - h) << "\n"; //하나의 출력 안에 컴마:오른쪽 출력
	
	cout << g++ << " " << g++ << --g << "\n"; //시발 이게뭐야(403941)
	cout << g++; //41 + 1에서 41만 출력
	cout << g++; //42 + 1에서 42만 출력
	cout << --g; //43 - 1모두 계산 42

	return 0; //생략 가능
}