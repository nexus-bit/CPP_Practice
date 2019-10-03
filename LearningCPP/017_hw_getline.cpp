//과제 - 20190925 PT2_27p getline() 사용
#include <iostream>
#include <iomanip>
//<iomanip> - cout<<float변수<<setprecision(4)를 사용가능 - 숫자네개표현
using namespace std;
//여기서 주목할 함수는 cin.getline(address, 100, 'a') - 주의:"큰따옴X" '작은따옴O'
//address 배열을 a가 나올때까지 입력받음(스페이스바를 쓸수있다)

int main() {
	char id[8];
	cout << "학번>>";
	cin.getline(id, 8, '\n');

	char info[15];
	cout << "학과와 이름>>";
	cin.getline(info, 15, '\n');

	float sco[5] = { 0 };
	cout << "C++성적>>";
	cin >> sco[0];
	cout << "Java성적>>";
	cin >> sco[1];
	cout << "DS성적>>";
	cin >> sco[2];
	sco[3] = sco[0] + sco[1] + sco[2];
	sco[4] = sco[3] / 3;

	cout << "\n학번	이름		C++	Java	DS	총점	평균" 
		<<"\n-------------------------------------------------------------\n"
		<< id << "	" << info << "	";
	for (int i = 0; i < 4; i++)
		cout << sco[i] << "	";
	cout << setprecision(4) << sco[4] ;  //표현숫자를 4개로 제한(지속됨)

	return 0;
}