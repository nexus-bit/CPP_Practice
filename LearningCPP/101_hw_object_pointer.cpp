//20191030 ��ü ������ ���� �� Ȱ��
#include <iostream>
using namespace std;

class Square { //Ŭ���� ���� ������, ��� �Լ��� �ܺη� ���� �ʾƵ� ��
	int length;
public:
	Square(){
		length = 2;
	}
	Square(int l) {
		length = l;
	}
	int getArea() {
		return (length * length);
	}
};

int main() {
	Square spongebob;
	Square table(10);
	Square* pointer; //��ü ������ ����

	cout << spongebob.getArea() << endl; //���� �˴� ��� ��� �Լ� ����

	pointer = &spongebob; //��ü �����ʹ� ��ü spongebob�� ����Ŵ
	cout << pointer->getArea() << endl; //spongebob�� getArea()ȣ�� - �ּҸ� ���ؼ� : ->
	cout << (*pointer).getArea() << endl; //spongebob�� getArea()ȣ�� - ������ ���ؼ� : .

	pointer = &table;
	cout << pointer->getArea() << endl; //table�� getArea()ȣ�� - �ּҸ� ���ؼ� : ->
	cout << (*pointer).getArea() << endl; //table�� getArea()ȣ�� - ������ ���ؼ� : .
}