////과제 - 20191010 book151p_5 random function
//#include<iostream>
//#include<ctime>
//using namespace std;
//
//class random {
//public:
//	int k;						//생성자 함수를 테스트 하기 위해 굳이 멤버 변수 선언
//	random();					//생성자 함수, 안 써두면 컴파일러가 기본생성자를 만듦
//	int justrandom();			//멤버 함수
//	int rangerandom(int a, int b); //매개 변수 두개를 받는 멤버 함수
//};
//random::random() {				//생성자는 자료형이 없다.
//	k = 4;						//생성자는 클래스 내의 멤버 변수를 초기화 해준다
//	srand((unsigned)time(0));	//생성자는 클래스의 객체를 생성하는 데 필요한 작업(객체 초기화) 수행
//	//생성자를 선언 안하면 컴파일러가 자동으로 만들지만, 공백 생성자를 만들기 때문에 srand()함수를 메인 함수로 빼야 할 것이다.
//}
//int random::justrandom() {
//	//☆★☆★☆★☆★☆★이 자리에 srand함수를 쓰면 왜 에러가 나는지 모르겠다 질문☆★☆★☆★☆★☆★
//	return rand();
//}
//int random::rangerandom(int a, int b) {
//	return (rand() % (b - a + 1)) + a; //(0 ~ b-a+1-1) -> 범위+a -> a ~ b까지 (범위 헷갈리니 주의)
//}
//
//int main() {
//	random object;					//클래스 객체 생성 : 생성자의 매개 변수가 없음 -> 객체의 매개 변수도 없음
//	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl; //RAND_MAX는 32767임
//	for (int i = 0; i < 10; i++)
//	{
//		int n = object.justrandom();//클래스 객체 object를 통해 클래스 함수 justrandom 사용
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10 개 --" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		int n = object.rangerandom(2, 4);
//		cout << n << ' ';
//	}
//}