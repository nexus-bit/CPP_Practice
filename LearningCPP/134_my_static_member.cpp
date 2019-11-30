//Static 멤버 : 전역 함수를 클래스 내에 구현해서 캡슐화
//또한 전역 변수처럼 공유 변수로 쓸 수도 있음

//static 멤버는 객체 내부가 아닌 별도에 공간에 생성 - 객체 영향 X
//또한 객체과 상관없이 프로그램이 종료될 때 소멸
#include<iostream>
using namespace std;


//***static 활용 1 : 클래스 멤버 변수 직접 참조***///
class Person {
public:	//public이어야 다른 얘들이 접근 가능
	int money; //개인 소유의 돈
	void addmoney(int money) {
		this->money = money;
	}

	static int sharedMoney;	//분대활동비, static 변수는 클래스 내부 및 외부에서 둘다 선언(세트)
	static void addshared(int money) {
		sharedMoney = sharedMoney + money;
	}
	
	int total() {return money + sharedMoney;}	//일반 멤버는 static과 non-static 모두 접근 가능
	//static int total() { return money + sharedMoney; } 주의 : static 멤버는 static만 접근 가능
};
int Person::sharedMoney = 0;	//활동비 초기화, static메모리는 객체가 아닌 전역 공간에 생성



//***static 활용 2 : static 함수를 통해 private 멤버 참조***//
class square {
	int length;
	static int shapes;	//갯수를 private화 시킴
public:
	square(int length = 1) {
		this->length = length;
		shapes++;	//생성시 갯수 1 증가
	}
	~square() {
		shapes--;	//소멸시 갯수 1 감소
	}
	static void addshape() {
		shapes++;	//함수 호출시 갯수 1 증가
	}
	static void delshape() {
		shapes++;	//함수 호출시 갯수 1 감소
	}
	static int getshape() {
		return shapes;	//함수 호출시 갯수 리턴
	}
};
class circle {
	int radius;
public:
	circle(int radius = 1) {
		this->radius = radius;
		square::addshape();	//생성시 square의 shape갯수 1 증가하는 함수 호출
	}
	~circle() {
		square::delshape(); //생성시 square의 shape갯수 1 감소하는 함수 호출
	}
};
int square::shapes = 0;	//static메모리는 객체가 아닌 전역 공간에 생성



int main() {
	Person kim;
	kim.money = 165000;	//이병 월급
	kim.sharedMoney = 12000;

	Person noh;
	noh.money = 5000;
	noh.addmoney(165000);
	noh.addshared(4000);
	cout << kim.sharedMoney << " " << noh.sharedMoney << " " << Person::sharedMoney << endl;	//객체로도, 클래스로도 접근이 가능함.

	square spongebob;
	circle jingjing;
	cout << square::getshape();	//갯수 2개
}