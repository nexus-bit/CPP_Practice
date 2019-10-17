#include<iostream>
#include<ctime> //시간에 따른 랜덤을 위한 헤더
using namespace std;

int main()
{
	srand(1); //이 수에 따라 rand()의 값이 달라짐, 기본 : 1
	for (int i = 0; i < 10; i++)
		cout << rand() << endl; //rand()는 기본적으로 41, 18467...
	puts("");

	cout << "시간 값은 매번 바뀜 : ";
	cout << time(NULL) << endl; //NULL은 대문자
	puts("");

	srand((unsigned int)time(NULL)); //이제 랜덤 함수값은 시간에 따라 달라짐

	for (int i = 0; i < 10; i++)
		cout << rand() << endl; //srand(시간에따라 바뀜)에 따른 랜덤값 생성
	puts("");

	for (int i = 0; i < 10; i++)
		cout << (rand() % 97) + 4 << endl; //0~96까지의 97개의 값 -> 4~101까지의 97개의 값
	puts("");

	for (int i = 0; i < 10; i++)
		cout << (rand() % 8) + 4 << endl; //0~7까지의 8개의 값 -> 4~11까지의 8개의 값
	puts("");
}
