//friend 함수 - 외부 함수/클래스가 나의 private에 접근할 수 있게 해줘요
#include<iostream>
using namespace std;
//보통 참조 오류를 막기 위해 대가리를 먼저 선언해준다

////1. 외부 함수를 프렌드로 초청하기
//class Rect {
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	friend bool equals(Rect r, Rect s);	//equals 함수를 Rect에 초대합니다
//};
//
//bool equals(Rect r, Rect s) {	//equals는 Rect의 private멤버에 접근 가능 height, width
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Rect a(3, 4);
//	Rect b(4, 5);
//
//	if (equals(a, b))
//		cout << "equal!!";
//	else
//		cout << "Not equal!!";
//}

////2. 다른 클래스의 멤버 함수를 프렌드로 초청하기
//class Rect;
//
//class RectManager {
//public:
//	bool equals(Rect r, Rect s);
//	//아직은 Rect클래스에 접근할 수 없음
//};
//
//class Rect {
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	//Rect클래스는 Rectmanager클래스의 equals함수를 초대
//	friend bool RectManager::equals(Rect r, Rect s);
//};
//
//bool RectManager::equals(Rect r, Rect s) {
//	//Rect 클래스에서 프렌드로 초대한다는 내용을 읽은 뒤에야
//	//Rectmanager클래스의 equals 함수는 Rect멤버에 접근 가능
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}

//3. 다른 클래스 전체를 프렌드로 초청하기
class Rect;

class Rectmanager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}
	friend Rectmanager;
	//Rectmanager 클래스 자체를 초청함
};

bool Rectmanager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}
////말고도 Rectmanager클래스의 다른 함수들도 접근이 가능하다