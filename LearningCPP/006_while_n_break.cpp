//주석처리 ctrl AKC 해제 AKU
#include <iostream>
using namespace std;

int main(){
	int a;
	int input, sum = 0;
	while (true){
		cout << "짝수를 제외한 정수 입력, 0입력시 종료>";
		cin >> input;
		if (input == 0)
			break; //0입력시 while문 탈출
		else if (input % 2 == 0)
			continue; //짝수가 입력되면 현재값 루프 중단 후 다음값 루프로 넘어감
		sum += input;
		cout << "누적합은" << sum << "입니다.\n";
	}
	cout << "0을 입력받아 프로그램을 종료합니다";
}