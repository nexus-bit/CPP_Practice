//#include<iostream>
//#include<ctime> //�ð��� ���� ������ ���� ���
//using namespace std;
//
//int main()
//{
//	srand(1); //�� ���� ���� rand()�� ���� �޶���, �⺻ : 1
//	for (int i = 0; i < 10; i++)
//		cout << rand() << endl; //rand()�� �⺻������ 41, 18467...
//	puts("");
//
//	cout << "�ð� ���� �Ź� �ٲ� : ";
//	cout << time(NULL) << endl; //NULL�� �빮��
//	puts("");
//
//	srand((unsigned int)time(NULL)); //���� ���� �Լ����� �ð��� ���� �޶���
//
//	for (int i = 0; i < 10; i++)
//		cout << rand() << endl; //srand(�ð������� �ٲ�)�� ���� ������ ����
//	puts("");
//
//	for (int i = 0; i < 10; i++)
//		cout << (rand() % 97) + 4 << endl; //0~96������ 97���� �� -> 4~101������ 97���� ��
//	puts("");
//
//	for (int i = 0; i < 10; i++)
//		cout << (rand() % 8) + 4 << endl; //0~7������ 8���� �� -> 4~11������ 8���� ��
//	puts("");
//}