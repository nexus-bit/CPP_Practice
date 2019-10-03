//주석처리 ctrl AKC 해제 AKU
#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "점수를 입력하세요 : ";
	cin >> score;
	while (score > 100) {
		cout << "다시입력하세요 : ";
		cin >> score;
	}
	int div = score / 10; //90점이면 div>9
	switch (div) //div 숫자가 다음의 경우
	{
		case 10: //div가 10일 경우와
		case 9: //div가 9점인 두 경우 > A
			cout << "A입니다."; //대괄호 필요X
			break; //★중단시켜야 함★
		case 8:
			cout << "B입니다";
			break;
		case 7:
			cout << "C입니다.";
			break;
		default: //디폴트값(그외점수)
			cout << "이런 멍청이";
			break;
	}
	//return 0;
}