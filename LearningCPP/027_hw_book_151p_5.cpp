////���� - 20191010 book151p_5 random function
//#include<iostream>
//#include<ctime>
//using namespace std;
//
//class random {
//public:
//	int k;						//������ �Լ��� �׽�Ʈ �ϱ� ���� ���� ��� ���� ����
//	random();					//������ �Լ�, �� ��θ� �����Ϸ��� �⺻�����ڸ� ����
//	int justrandom();			//��� �Լ�
//	int rangerandom(int a, int b); //�Ű� ���� �ΰ��� �޴� ��� �Լ�
//};
//random::random() {				//�����ڴ� �ڷ����� ����.
//	k = 4;						//�����ڴ� Ŭ���� ���� ��� ������ �ʱ�ȭ ���ش�
//	srand((unsigned)time(0));	//�����ڴ� Ŭ������ ��ü�� �����ϴ� �� �ʿ��� �۾�(��ü �ʱ�ȭ) ����
//	//�����ڸ� ���� ���ϸ� �����Ϸ��� �ڵ����� ��������, ���� �����ڸ� ����� ������ srand()�Լ��� ���� �Լ��� ���� �� ���̴�.
//}
//int random::justrandom() {
//	//�١ڡ١ڡ١ڡ١ڡ١��� �ڸ��� srand�Լ��� ���� �� ������ ������ �𸣰ڴ� �����١ڡ١ڡ١ڡ١ڡ١�
//	return rand();
//}
//int random::rangerandom(int a, int b) {
//	return (rand() % (b - a + 1)) + a; //(0 ~ b-a+1-1) -> ����+a -> a ~ b���� (���� �򰥸��� ����)
//}
//
//int main() {
//	random object;					//Ŭ���� ��ü ���� : �������� �Ű� ������ ���� -> ��ü�� �Ű� ������ ����
//	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl; //RAND_MAX�� 32767��
//	for (int i = 0; i < 10; i++)
//	{
//		int n = object.justrandom();//Ŭ���� ��ü object�� ���� Ŭ���� �Լ� justrandom ���
//		cout << n << ' ';
//	}
//	cout << endl << endl << "-- 2���� " << "4������ ���� ���� 10 �� --" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		int n = object.rangerandom(2, 4);
//		cout << n << ' ';
//	}
//}