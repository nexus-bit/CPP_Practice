//20191114 PT4_40p 문자열로 계산하기
#include<iostream>
#include<string>
using namespace std;

//최대 4개까지만 출력함
int main() {
	string s;
	cout << "123-234-54-129처럼 뺄셈 문자열 입력(4개까지만 계산)\n>-";
	getline(cin, s, '\n');
	int plusindex = 0;//'-'를 찾을 위치
	int mid = 0; //지금까지 계산한 부분
	int sum = 0; //출력할 변수
	int control = 1; //숫자 최대 네개 컨트롤
	string temp(""); //임시로 저장해서 sum에 더할 임시 스트링

	while (control <= 4) {
		//마지막 숫자일 경우 - 다음에 '-'가 없음
		if (s.find('-', mid) > 1000) { //더이상 '-'를 못찾으면 조건에 해당
			temp = s.substr(mid, 10); //어차피 NULL값은 출력되나마나임, 그냥 10개 출력

			sum = sum - stoi(temp);
			cout << "처리 : " << temp << ", sum-> " << sum << endl;
			break; //마지막 숫자 출력후 종료
		}

		//마지막 숫자가 아닌 다른 숫자들, '-'를 찾을 수 있을 것임.
		plusindex = s.find('-', mid); //지금껏 계산한 곳 이후에 있는 '-' 찾기(초기일경우 0부터)
		temp = s.substr(mid, plusindex-mid); //지금껏 계산한곳의 이후부터 '-' 이전까지 자름 - 순수한 숫자

		mid = plusindex + 1; //새로 계산할 부분을 방금 계산한 '-'의 위치 뒤로 변경

		sum = sum - stoi(temp);
		cout << "처리 : " << temp << ", sum-> " << sum << endl;
		control = control + 1; //계산한 횟수
	}
}

////오리지널 프로그램
//int main() {
//	string s;
//	cout << "123+234+54+129처럼 덧셈 문자열 입력\n>";
//	getline(cin, s, '\n');
//	int plusindex = 0;//+를 찾을 위치
//	int mid = 0; //지금까지 계산한 부분
//	int sum = 0; //출력할 변수
//	string temp(""); //임시로 저장해서 sum에 더할 임시 스트링
//
//	while (1) {
//		//마지막 숫자일 경우 - 다음에 +가 없음
//		if (s.find('+', mid) > 1000) { //더이상 +를 못찾으면 조건에 해당
//			temp = s.substr(mid, 10); //어차피 NULL값은 출력되나마나임, 그냥 10개 출력
//
//			sum = sum + stoi(temp);
//			cout << "처리 : " << temp << ", sum-> " << sum << endl;
//			break; //마지막 숫자 출력후 종료
//		}
//
//		//마지막 숫자가 아닌 다른 숫자들, +를 찾을 수 있을 것임.
//		plusindex = s.find('+', mid); //지금껏 계산한 곳 이후에 있는 '+' 찾기(초기일경우 0부터)
//		temp = s.substr(mid, plusindex-mid); //지금껏 계산한곳의 이후부터 '+' 이전까지 자름 - 순수한 숫자
//
//		mid = plusindex + 1; //새로 계산할 부분을 방금 계산한 +의 위치 뒤로 변경
//
//		sum = sum + stoi(temp);
//		cout << "처리 : " << temp << ", sum-> " << sum << endl;
//	}
//}