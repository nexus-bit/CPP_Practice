//friend �Լ� - �ܺ� �Լ�/Ŭ������ ���� private�� ������ �� �ְ� �����
#include<iostream>
using namespace std;
//���� ���� ������ ���� ���� �밡���� ���� �������ش�

////1. �ܺ� �Լ��� ������� ��û�ϱ�
//class Rect {
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	friend bool equals(Rect r, Rect s);	//equals �Լ��� Rect�� �ʴ��մϴ�
//};
//
//bool equals(Rect r, Rect s) {	//equals�� Rect�� private����� ���� ���� height, width
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

////2. �ٸ� Ŭ������ ��� �Լ��� ������� ��û�ϱ�
//class Rect;
//
//class RectManager {
//public:
//	bool equals(Rect r, Rect s);
//	//������ RectŬ������ ������ �� ����
//};
//
//class Rect {
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	//RectŬ������ RectmanagerŬ������ equals�Լ��� �ʴ�
//	friend bool RectManager::equals(Rect r, Rect s);
//};
//
//bool RectManager::equals(Rect r, Rect s) {
//	//Rect Ŭ�������� ������� �ʴ��Ѵٴ� ������ ���� �ڿ���
//	//RectmanagerŬ������ equals �Լ��� Rect����� ���� ����
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}

//3. �ٸ� Ŭ���� ��ü�� ������� ��û�ϱ�
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
	//Rectmanager Ŭ���� ��ü�� ��û��
};

bool Rectmanager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}
////���� RectmanagerŬ������ �ٸ� �Լ��鵵 ������ �����ϴ�