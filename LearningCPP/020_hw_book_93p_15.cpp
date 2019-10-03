//과제 - 20190926 book93p_15 공백을 포함한 사칙연산
#include<iostream>
using namespace std;

int main() {
	cout << "사칙 연산 > ";
	char arr[15] = { 0 };
	cin.getline(arr, 15, '\n'); //엔터키로 공백까지 받아들임

	char arr1[5], calc, arr2[5]; //공백을 기준으로 분할해서 받아들일 변수 선언

	int i = 0; //i는 초기화되지않고 계속 1씩 증가(arr함수 관여)
	int j = 0; //j는 while문 끝나고 초기화 됨
	while (arr[i] != ' ') { //공백 이전 숫자는 arr1에 입력
		arr1[j] = arr[i];
		i++; j++;
	}
	i += 1;
	cout << atoi(arr1) << " "; //테스트출력

	calc = arr[i]; //연산자는 변수 calc에 받아들임
	i++; i++; //공백이 없어지는 곳까지 참조라벨 i 증가
	cout << calc << " "; //테스트출력

	j = 0;
	while (j < 5) { //마지막 숫자 뒤에는 공백이 없으므로 조건을 손봐줌
		arr2[j] = arr[i]; //연산자뒤 공백 이후 숫자(5자리까지) arr2에 받아들임
		i++; j++;
	}
	cout << atoi(arr2) << " = "; //테스트출력

	if (calc == '+') //연산자를 담은 변수 calc에 따른 계산 시작
		cout << atoi(arr1) + atoi(arr2);
	else if (calc == '-')
		cout << atoi(arr1) - atoi(arr2);
	else if (calc == '/')
		cout << atoi(arr1) / atoi(arr2);
	else if (calc == '*')
		cout << atoi(arr1) * atoi(arr2);
	else if (calc == '%')
		cout << atoi(arr1) % atoi(arr2);
	else
		cout << "연산자 오류";
}

////정답 2 - 인터넷 참조
//#define _CRT_SECURE_NO_WARNINGS //strok()함수 쓰려면 선언
//#include <iostream>
//using namespace std;
//int add(int a, int b); //안그래도 되지만 굳이 함수를 통해 계산 예정
//int sub(int a, int b);
//int mul(int a, int b);
//int divi(int a, int b);
//int rem(int a, int b);
//int main() {
//    char text[100];
//    char *ptr = NULL; //포인터로 만든 이유??
//    int left, right;
//    for (;;) { //무한반복
//        cout << "? ";
//        cin.getline(text, 100); //엔터키로 공백까지 받아들임
//        left = atoi(strtok(text, " ")); //strok로 text를 공백 전까지 받아들여 left피연산자 변수에 집어둠
//        ptr = strtok(NULL, " "); //연산자는 ptr에 저장
//        right = atoi(strtok(NULL, " ")); //strok로 text를 공백 전까지 받아들여 right피연산자 변수에 집어둠
//        if (*ptr == '+') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << add(left, right) << endl; //연산자 ptr 값에 따라 조건에 따른 출력
//        }
//        else if (*ptr == '-') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << sub(left, right) << endl;
//        }
//        else if (*ptr == '*') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << mul(left, right) << endl;
//        }
//        else if (*ptr == '/') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << divi(left, right) << endl;
//        }
//        else if (*ptr == '%') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << rem(left, right) << endl;
//        }
//        else
//            cout << "입력이상" << endl;
//    }
//}
//int add(int a, int b) {
//    return a + b;
//}
//int sub(int a, int b) {
//    return a - b;
//}
//int mul(int a, int b) {
//    return a * b;
//}
//int divi(int a, int b) {
//    return a / b;
//}
//int rem(int a, int b) {
//    return a % b;
//}