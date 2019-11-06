//20191106 book94p_16 alphabet histogram_upgrade(know-how)
#include<iostream>
#include<Windows.h>				//how the roop goes?
using namespace std;				//sorry I can't translate them all.. 영어로 번역하기 많으므로 한국어로 하겠습니다

int isAlpha(char arr[])
{
	int i = 0; int sum = 0;
	int alphabet[26] = { 0 };		//a부터 차례대로 배열에 카운트([0]-a의갯수, [25]-z의갯수)
	while (arr[i] != NULL)			//문장 입력이 끝나는곳까지 갯수 반복 누적
	{
		int charindex = 97;			//a는 숫자로 변환시 97(ASCII-Code)
		while (charindex <= 122)	//z까지 입력된 값을 순차적으로 비교
		{
			if ((int(arr[i]) == charindex)||(int(arr[i]) == charindex - 32)) {	 //입력된 값은 a-z, A-Z까지 무엇에 해당하는가
				alphabet[(charindex - 97)] += 1;	//일치하는 경우 alphabet배열 내 숫자 카운트
													//ex)c입력 -> a-z까지 돌아가며 비교 -> c발견 -> alphabet[2]+=1 -> sum+=1
				sum += 1;		//알파벳 개수누적
			}
			charindex++;		//a-z까지 돌아야 하므로 a + 1 = b가 되듯이 인자 ++
		}
		i++;					//입력값을 다 돌아야 하므로 i++
	}
	//위 작업을 실행하면 alphabet[]배열에 a-z순으로 각각의 갯수가 입력됨

	for (int i = 0; i < 26; i++) {									//알파벳 종류 26개
		cout << char(i + 97) << " > " << alphabet[i] << "	";		//ex) char(97+2) = c
		for (int j = 0; j < alphabet[i]; j++) {						//별 출력하기 위한 반복문
			cout << "*"; Sleep(100);
		}
		puts(""); Sleep(50);										//출력에 약간의 딜레이를 주어 재미를 더함
	}
	return sum;
}


int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
	cout << "텍스트의 끝은 ; 입니다. 3000개까지 가능합니다.\n";
	char text[3000] = { 0 };
	cin.getline(text, 3000, ';');

	cout << "총 알파벳수 > " << isAlpha(text);


	cout << "\n\n루프는 다음과 같이 돕니다\n"; //반복문이 어떤 방식으로 도는지 설명하는 부분
	cout << "-	 a b c d e f ~~~ y z\n";
	int loop = 1;
	while (loop <= 5) {
		cout << loop <<"번글자" << "	";
		for (int i = 0; i < 10; i++) {
			cout << "√";
			Sleep(100);
		}
		loop++;
		cout << "	일치하는 문자열 배열에 카운트+1" << endl;
	}
	cout << "....글자 갯수 만큼 반복\n";
}