//PT8_13p 상속과 객체 포인터 - 업캐스팅 다운캐스팅
#include<iostream>
using namespace std;

class point {
	int x, y;
public:
	void set(int x, int y);
	void showpoint();
};

class Cpoint : public point {	//point를 상속 받음
	string color;
public:
	void setColor(string color);
	void showColorPoint();
};

int main() {
	//업 캐스팅 : 사람을 동물로 봄, Cpoint를 부모인 point로 형변환 시키기
	Cpoint cp;	//Cpoint의 객체를 만든 후
	Cpoint* pDer = &cp;	//포인터 pDer에 연결시킨 후
	point* pBase = pDer;	//부모의 포인터 pBase에도 연결시킴 - 포인터를 통한 업캐스팅

	//다운 캐스팅 : 자식클래스의 객체포인터로 치환
	pDer = (Cpoint*)pBase;	//강제형변환 - 다운캐스팅
}