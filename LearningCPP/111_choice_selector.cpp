#include<iostream>	//기본
#include<ctime>	//랜덤함수
//#include<iomanip>	- getline
#include<windows.h>	//sleep
using namespace std;

int main() {
	//결정 메뉴 입력하기
	cout << "무엇을 결정하시겠습니까?\n>";
	char title[50];
	cin.getline(title, 50, '\n');
	cout << "선택지는 몇가지 입니까? : ";
	int select;
	cin >> select;

	//선택지 입력하기
	char answer[10][50] = { NULL };
	cin.getline(answer[0], 50, '\n'); //첫 번째 루프가 씹혀서 그냥 추가함
	for (int i = 0; i < select; i++) {
		cout << i + 1 << "번째 항목 : ";
		cin.getline(answer[i], 50, '\n');

	}

intro: //goto문 인덱스
	//기이한 출력
	Sleep(500);
	cout << "\n...\n";
	Sleep(1000);
	char say[36] = { "우주의 기운을 조합하여 결정합니다.\n" }; //string - Sleep()이 씹힘
	for (int i = 0; i < 35; i++) {
		cout << say[i];
		Sleep(50);
	}

	//랜덤 지정
	srand((unsigned int)time(NULL));
	int num = rand()%select;
	cout << num + 1 << "번 항목 : ";
	for (int j = 0; j < 50; j++)
		cout << answer[num][j];

	//사용자 입력
	cout << "\n운명을 받아들이시려면 『숙응』을, 다시 하려면 『다시』를입력하세요\n>";
	char end[5];
	cin >> end;
	if (strcmp(end, "다시") == 0)
		goto intro;
}