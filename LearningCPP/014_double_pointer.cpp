//주석처리 ctrl AKC 해제 AKU
#include<iostream>
using namespace std;

int main() {
	int* numPtr1;     // 단일 포인터 선언
	int** numPtr2;    // 이중 포인터 선언
	int num1 = 10;
	numPtr1 = &num1;    // num1의 메모리 주소 저장 
	numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장
	cout << **numPtr2;  // 20: 포인터를 두 번 역참조하여 num1의 메모리 주소에 접근

	int n = 34;
	int* p = &n;	//*p를 n(주소)에 링크시킴, 이제 p는 일종 포인터(*p) 혹은 타 포인터 링크(&p)로만 써야함
	int** d = &p;	//**d를 p(주소)에 링크시킴, 이중 포인터 쓸때 같은 첨자 사용 불가(위의 사유로)
	int*** j = &d;	//***j를 d(주소)에 링크시킴, 삼중 포인터
	cout << "\n" << ***j << "\n";
	***j = 25;			//포인터를 타고 타고 타서 원래 변수 n의 값을 변경
	int calc = ***j * 4; //계산에서 활용
	cout << "\n" << ***j << " " << n << "\n" << calc;
}