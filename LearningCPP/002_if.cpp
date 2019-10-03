//주석처리 ctrl AKC 해제 AKU
#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "점수를 입력하세요 : ";
	cin >> score;

	while (score > 100){
		cout << "올바른 숫자를 입력하시오 : ";
		cin >> score;
		}

	if (score >= 90)
		cout << "당신 A 수령. 축하합니다.";
	else if (score >= 80)
		cout << "당신 B 수령. 아쉽네요.";
	else if (score >= 70)
		cout << "당신 C 수령. 공부하세요.";
	else if (score >= 60)
		cout << "당신 D 수령. F가 아닌게 어디야.";
	else
		cout << "당신 F수령. ㅋㅋㅋㅋㅋㅋ";
		
	return 0;
}
