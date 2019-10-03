//과제 - 20190925 PT2_25p cstring 사용
#include <iostream>
using namespace std;
//여기서 주목할 내용은 조건 [strcmp(char배열명, "문자") == 0]
//배열에 입력된 내용이 "문자"와 다른가 == 아니오(F) -> 둘은 일치

////방법 1 - 로그인 성공하면 나오는 코드가 밑으로 빠짐
//int main() {
//	char ID[12];
//	char PW[12];
//	do{
//		cout << "ID 입력>>";
//		cin >> ID;
//		if (strcmp(ID, "scott"))
//			cout << "없는 아이디 입니다\n";
//		else {
//			cout << "\n환영합니다\n";
//			cout << "Password>>";
//			cin >> PW;
//			if (strcmp(PW, "tiger"))
//				cout << "비밀번호가 틀립니다\n처음화면으로 돌아갑니다\n\n";
//		}
//	} while (strcmp(ID, "scott") || strcmp(PW, "tiger")); //or문으로 하나라도 T나오면 반복
//	cout << "0을 입력하면 종료합니다\nSQL>";
//	int exit;
//	cin >> exit;
//	return 0;
//}

//방법 2 - 로그인 성공하면 나오는 코드가 중간(if문)으로 들어감
int main() {
	char ID[12];
	char PW[12];
	cout << "exit 명령어 : 프로그램 종료\n";

	while (true){
		cout << "\nID 입력>>";
		cin >> ID;
		if (strcmp(ID, "scott") == 0) {
			cout << "\n환영합니다 " << ID << "!\n";
			cout << "Password>>";
			cin >> PW;
			if (strcmp(PW, "tiger") == 0) {
				cout << "\nSQL>";
				char data[30];
				cin >> data;
				/*데이터 입력*/
				cout << "데이터 입력이 완료되었습니다\n";
				break;
			}
			else if (strcmp(PW, "exit") == 0)
				break;
			else
				cout << "비밀번호가 틀립니다\n처음화면으로 돌아갑니다\n\n";
		}
		else if (strcmp(ID, "exit") == 0)
			break;
		else 
			cout << "없는 아이디 입니다\n";
	}
	cout << "프로그램을 종료합니다";
	return 0;
}