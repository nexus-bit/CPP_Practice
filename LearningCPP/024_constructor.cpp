//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//class hello {
//public:
//	int x;
//	int y;
//
//	hello(); //�Ű������� ���� ������
//	hello(int a); //�Ű������� �ϳ��� ������
//	hello(int a, int b); //�Ű������� �ΰ��� ������
//
//	int func();
//	int func(int a);
//	int func(int a, int b); //�Լ�
//};
//hello::hello() {
//	x = 9; y = 1; //helloŬ������ ��� ������ x, y�� a, b�� �Է� �޾Ƶ� ����(�� �� ����)
//}
//hello::hello(int a) {
//	x = 7; y = 0;
//}
//hello::hello(int a, int b) {
//	x = 1; y = 1;
//}
//
//int hello::func() {
//	return (x + y);
//}
//int hello::func(int a) {
//	return (x - y);
//}
//
//int hello::func(int a, int b) {
//	return (x * y);
//}
//int main() {
//	hello no3; //Ŭ���� ��ü ������ �⺻ �������� �Ű� ���� ���� - 9, 1
//	cout << no3.func()/*'��ü.�Լ�'�� ��������*/ << " " << no3.func(3, 4232)/*'��ü.�Լ�'�� ���� ����*/ << endl; //�Ű� ������ �´� �Լ� �����.
//
//	hello no1(8); //Ŭ���� ��ü ������ �⺻ �������� �Ű� ������ �ϳ� - 7, 0
//	cout << no1.func() << " " << no1.func(3231, 4) << endl;
//
//	hello no2(8, 4); //Ŭ���� ��ü ������ �⺻ �������� �Ű� ������ �� - 1, 1
//	cout << no2.func() << " " << no2.func(3, 4) << endl;
//
//
//
//}