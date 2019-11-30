//20191128  project2 - 판매실적 계산 프로그램
#include<iostream>
using namespace std;
int main() {
	//판매 금액 : 가격, 수량, 총판액
	//실판매액 : 이익률 판매이익(세금포함)
	//실 판매이익 :t실 판매이익, 세금, 합계
	//종료 : 물건의 가격이 0이거나 음수 이하값을 가지면 그만함.
	int price, num, total, benefit, tax;
	cout << "물건의 가격 : ";
	cin >> price;
	cout << "물건의 갯수 : ";
	cin >> num;
	cout << "이익률% 입력 : ";
	cin >> benefit;
	total = price * num;

	cout << "\n\n판매금액=================================\n";
	cout << "가	격	: " << price << "	수량 : " << num;
	cout << "\n판매 금액	: " << total;

	cout << "\n\n실판매액=================================\n";
	cout << "이익률 : " << benefit << "%, 판매이익(세금포함) : " << total * benefit / 100;

	cout << "\n\n실 판매이익==============================\n";
	tax = 10;
	cout << "실 판매이익	: " << (total * benefit / 100) - (total * benefit / 100 / tax) << endl;
	cout << "세	금	: " <<  total * benefit / 100 / tax << "(" << tax << "%)";

	cout << "\n\n합계=====================================\n";
	cout << "합	계	: " << total * benefit / 100 / tax << endl;

	return 0;
}