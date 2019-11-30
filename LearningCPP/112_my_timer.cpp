//1초마다 프린트하는 프로그램 - Sleep 밀리세컨드만큼 쉼.
#include <iostream>
#include <windows.h> //비프음, 대기
#include <ctime> //현재시간 출력
using namespace std;

int main() {
	cout << time(NULL) / (60 * 24) % 1093781 % 24 << "시" << time(NULL) / (60) % 26250720 % 60 << "분" << time(NULL) % 1575045960 % 60 << "초 현재 수행할 ";
	cout << "타이머 입력 : ";
	int input; cin >> input;
	if (input % 11 == 0) input++;

	cout << "타이머가 시작되었습니다. 본 타이머는 정확한 측정용이 아닙니다." << endl;
	cout << "==============================================================" << endl;

	int s = 1;
	while (1) {
		Sleep(700);
		cout << s << "초 경과\n";
		

		if (s == input) {	//타이머 만료 비프음
			system("cls");	//프롬포트 초기화
			cout << "\n타이머 만료";
			for (int i = 1; i <= 16; i++) {
				Beep(1000, 100);
				cout << "★";
				if (i % 4 == 0)
					Sleep(1000);
			}
			for (int i = 1; i <= 4; i++)	//못들었을까봐 더 높은음
				Beep(8000, 100);
			cout << "\n설정한 초 : " << s << "\n타이머 만료시간 : ";
			cout << time(NULL) / (60 * 24) % 1093781 % 24 << "시" << time(NULL) / (60) % 26250720 % 60 << "분" << time(NULL) % 1575045960 % 60 << "초";
			break;
		}

		if (s % 10 == 0) {	//10초 단위 비프음
			Beep(960, 1200);	//멜로디 960hz, 1200ms
			Sleep(100);	//대기 100ms
			s += 2;	//700ms + 1200ms + 100ms = 2s
			cout << endl;
		}

		else{	//1초 단위 비프음
			Beep(760, 300);	//멜로디 760hz, 300ms
			s++;	//700ms + 300ms = 1s
		}
	}
}
