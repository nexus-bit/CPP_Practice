//20191114 book215p_11 커피 자판기 coffee vending machine
#include<iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() {
		//최대량 10으로 채우기
		size = 10;
	}
	void consume() {
		//1만큼 소모하기
		size = size - 1;
	}
	int getsize() {
		//현재 크기 리턴
		return size;
	}
};

class Coffeemachine {
	Container tong[3];	//커피통 - 0, 물통 - 1, 설탕통 - 2
	void fill() {	//3개 모두 채움
		tong[0].fill();
		tong[1].fill();
		tong[2].fill();
		cout << "충전이 완료되었습니다" << endl;
	}
	void Espresso() {	//커피-1, 물-1
		if ((tong[0].getsize() < 1) || (tong[1].getsize() < 1))
			cout << "원료가 부족합니다" << endl;
		else {
			tong[0].consume();
			tong[1].consume();
			cout << "에스프레소가 나옵니다" << endl;
		}
	}
	void Americano() {	//커피-1, 물-2
		if ((tong[0].getsize() < 1) || (tong[1].getsize() < 2))
			cout << "원료가 부족합니다" << endl;
		else {
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
			cout << "아메리카노가 나옵니다" << endl;
		}
	}
	void Sugarcoffee() {	//커피-1, 물-2, 설탕-1
		if ((tong[0].getsize() < 1) || (tong[1].getsize() < 2) || (tong[2].getsize() < 1))
			cout << "원료가 부족합니다" << endl;
		else {
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
			tong[2].consume();
			cout << "설탕커피가 나옵니다" << endl;
		}
	}
	void statement() {	//현재 잔량
		cout << "---------------잔량----------------\n";
		cout << "커피	: " << tong[0].getsize() << endl;
		cout << "물	: " << tong[1].getsize() << endl;
		cout << "설탕	: " << tong[2].getsize() << endl;
	}
public:
	void run(int menu) {	//자판기 작동
		switch (menu) {
		case 1:
			Espresso(); break;
		case 2:
			Americano(); break;
		case 3:
			Sugarcoffee(); break;
		case 4:
			statement(); break;
		case 5:
			fill();
		}
	}
};

int main() {
	cout << "*****커피 자판기를 작동 합니다*****\n";
	int menu;
	Coffeemachine user;
	while (1) {
		cout << "\n메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)\n>";
		cin >> menu;
		user.run(menu);
	}
}