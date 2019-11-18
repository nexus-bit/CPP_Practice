//20191113 PT4_39p 문자열 하나씩 이동하기
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s("Knut Hong Gil Dong");	//18개
	int len = s.length();
	cout << s << endl;
	for (int i = 0; i < len; i++) {		//갯수만큼 반복
		string last = s.substr(len - 1, 1);	//배열 마지막 1개, 1은생략가능
		string sub = s.substr(0, len - 1);	//0부터 갯수-1개, 마지막거 빼고 전부
		//substr(A, B)에서 A:배열처럼 0부터 n-1로 생각, B:그냥 숫자라 그대로 적으면 됨
		s = last + sub;
		cout << s << endl;
	}
}