//20191204 project3 오일 보충량 구하는 프로그램(기초)
#include<iostream>
using namespace std;

int main() {
	float oil; int oilday;
	int day = 0; int km = 0;
	while (1) {
		cout << "0~500 사이의 기름 양을 입력하세요>>";
		cin >> oil;
		if (oil <= 500 && oil >= 0)
			break;
		else
			cout << "0~500사이를 입력하세요.\n";
	}

	cout << "===============================\n";
	cout << "날짜   연료량  주행거리    연료보충\n";
	cout << "===============================\n";

	cout.precision(4); //소수점포함 네자리 숫자까지 출력
	while (oil > 0) {
		cout << day << "	" << oil << "	" << km << "	";
		if (oil > 20) {
			cout << "안전" << endl;
			oilday = day + 3;
		}
		else cout << "보충 요" << endl;
		day += 3;
		km += 25 * day;
		oil = oil - (75 / 11.8);
	}

	cout << "===============================\n";
	cout << "다음 보충일은 현재로부터 " << oilday << "일 후 입니다." << endl;
	return 0;
}