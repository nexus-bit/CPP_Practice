////★스트링 클래스 총정리★ 정적 및 동적 객체 생성과 delete를 통한 소멸자의 메모리 반환에 대해 알아보자, 
//#include<iostream>
//#include<string> //스트링은 라이브러리의 객체
//using namespace std;
//
//int main() {
//	//char과 string 합치기
//	string a1("I Love You");
//	char a2[10] = { " Seongsu" };
//	string add = a1 + a2;
//	cout << add << endl;
//
//	//append로 문자열 추가하고, 다른 string에 넣기
//	string b = ("I like you");
//	b.append(" Jieun");
//	string change1 = b;
//	string change2(b);
//	cout << change1 << ", " << change2 << endl;
//
//	//char을 string에 넣기
//	char c[] = { 'G', 'I', 'V', 'E', '\0' };
//	string chartostring(c);
//	cout << chartostring << endl;
//
//	//string의 동적 할당
//	string* pointer = new string("Dynamic alloc");
//	pointer->append("ation");
//	cout << *pointer << endl; //*을 붙여야 값이 나옴(없으면 주소)
//	delete pointer; //반환 - 스트링 클래스의 소멸자가 실행 될 것임
//
//	 //string 배열, string 입력 받는 두가지 방법
//	string strarr[3];
//	for (int i = 0; i < 3; i++) {
//		cout << i + 1 << "째 이름 : ";
//		getline(cin, strarr[i], '\n');
//		//getline(cin, string이름, '구분자'); - 스트링의 getline
//		//cin.getline(변수, 크기, '구분자'); - 일반적인 getline과 모양이 다름
//		//cin >> strarr[i];
//	}
//
//	//string의 비교 - z로 가면 커요
//	string compare1("a");
//	string compare2("z");
//	if (compare1 < compare2)
//		cout << "스트링 a, z 비교시 z가 더 큽니다" << endl; // 출력됨
//
//	//string의 length()함수 - 문자 길이를 알려줘요
//	string length("He is my sister");
//	cout << "사이즈 : " << sizeof(length) << ", 길이 : " << length.length() << endl;
//
//	//string의 substr(몇번째,몇개)함수 - 인자를 짤라줘요(시작 : 0)
//	string cut("You Are Smart");
//	cout << cut.substr(4, 3) << endl; //인자 하나면 그 뒤로 다 짜름
//
//	//기존)char에서의 맞는지 체크 - strcmp()
//	char checkid[10] = { "login" };
//	if (strcmp(checkid, "login") == 0)
//		cout << "char로 로그인 되었습니다. ";
//	//개꿀)string에서의 맞는지 체크 - 그냥 비교
//	string checkpw("login");
//	if (checkpw == "login")
//		cout << "string으로 로그인 되었습니다." << endl;
//
//	//string의 find(찾을문자, 시작위치)함수 - 위치 검색(시작 : 0)
//	string search("Our Dirty Mice Are F***ing Annoying To Our Restaurant");
//	int searchFrom = 10; //검색 시점
//	cout << "10 이후 처음으로 나온 Our의 위치는 "<< search.find("Our", searchFrom) << endl;
//
//	//string의 replace(제거시작, 제거끝, 바꿀것) - 문자 변경
//	string original("I Love Daddy!");
//	string change("Mom^^");
//	//Dad의 위치를 찾아 거기부터 스트링 끝까지 제거 후, change로 바꾸기.
//	original.replace(original.find("Dad", 0), original.length(), change);
//	cout << original << endl;
//
//	return 0;
//}