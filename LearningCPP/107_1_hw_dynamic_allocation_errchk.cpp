//20191031 PT4_17p ���� �Ҵ� ���ǻ���
#include<iostream>
using namespace std;

int main() {
	//����1 : ���� �Ҵ��� �ƴ϶� delete�� ��� �Ұ� - �ذ� : ���� �Ҵ�
	int n = 123456;
	int* p = new int; //new �߰� : ���� �Ҵ�
	*p = n; //n�� �������ʱ�ȭ
	n = *p;
	delete p; //���� �Ҵ� �޸� ��ȯ

	//����2 : �޸� ��ȯ�� �ι� ���� ��� - �ذ� : �ѹ��� ��ȯ�ϱ�
	int* po = new int;
	//delete po;
	delete po;
}