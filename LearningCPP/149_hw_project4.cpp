//20191210  project4 - TAX 계산 프로그램
#include<iostream>
using namespace std;

int main() {
	int income, grade, tax;
	cout << "월 수입액을 입력하십시오 : ";
	cin >> income;
	cout << "아래에 해당되는 등급을 입력하십시오\n";
	cout << "(1:생활 보호 대상자, 2:국가 유공자, 3:일반)\n >";
	cin >> grade;

	cout << "==============================" << endl;
	cout << "***********영수증*************" << endl;
	cout << "월 수입액 : " << income << "	등급 : " << grade << endl;
	cout << "******************************" << endl;
	cout << "금액		세율	세금" << endl;
	cout << "-------------------------------" << endl;
	if (income < 500000) {
		tax = income * 0.02;
		cout << income << "		2%	" << tax << endl;
	}
	else if (income < 1000000) {
		if (grade == 1 || grade == 2) {
			tax = income * 0.02;
			cout << income << "		2%	" << tax << endl;
		}
		else {
			tax = 500000 * 0.02 + (income - 500000) * 0.05;
			cout << "500000		2%	" << 500000 * 0.02 << endl;
			cout << income - 500000 << "		5%	" << (income - 500000) * 0.05 << endl;
		}
	}
	else if (income < 2000000) {
		if (grade == 1 || grade == 2) {
			tax = 1000000 * 0.02 + (income - 1000000) * 0.05;
			cout << "1000000		2%	" << 1000000 * 0.02 << endl;
			cout << income - 1000000 << "		5%	" << (income - 1000000) * 0.05 << endl;
		}
		else {
			tax = 500000 * 0.02 + 500000 * 0.05 + (income - 1000000) * 0.07;
			cout << "500000		2%	" << 500000 * 0.02 << endl;
			cout << "500000		5%	" << 500000 * 0.05 << endl;
			cout << income - 1000000 << "		7%	" << (income - 1000000) * 0.07 << endl;
		}
	}
	else {
		switch (grade) {
		case 1:
			tax = 1000000 * 0.02 + (income - 1000000) * 0.05;
			cout << "1000000		2%	" << 1000000 * 0.02 << endl;
			cout << income - 1000000 << "		5%	" << (income - 1000000) * 0.05 << endl;
			break;
		case 2:
			tax = 1000000 * 0.02 + 1000000 * 0.05 + (income - 2000000) * 0.07;
			cout << "1000000		2%	" << 1000000 * 0.02 << endl;
			cout << "1000000		5%	" << 1000000 * 0.05 << endl;
			cout << income - 2000000 << "		7%	" << (income - 2000000) * 0.07 << endl;
			break;
		case 3:
			tax = 500000 * 0.02 + 500000 * 0.05 + 1000000 * 0.07 + (income - 2000000) * 0.1;
			cout << "500000		2%	" << 500000 * 0.02 << endl;
			cout << "500000		5%	" << 500000 * 0.05 << endl;
			cout << "1000000		7%	" << 1000000 * 0.07 << endl;
			cout << income - 2000000 << "		10%	" << (income - 2000000) * 0.1 << endl;
			break;
		}
	}
	cout << "-------------------------------" << endl;
	cout << "총 세금 " << tax << "원을 제외한 " << endl;
	cout << "월급 수령액 : " << income - tax << endl;
	cout << "******************************" << endl;
	cout << "탈세 자진신고 기간입니다.\n탈세는 나라를 병들게 합니다." << endl;
	cout << "==============================" << endl;
}
