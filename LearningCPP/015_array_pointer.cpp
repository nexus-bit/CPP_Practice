//�ּ�ó�� ctrl AKC ���� AKU
#include<iostream>
using namespace std;

int main() {
	int arr[10];
	int* pointer = arr;	//pointer�� arr�� ���� �ּ��̴�.
	//arr�� &�� ���� ������ c++���� �迭�� �ּҷ� ģ��.
	
	for (int i = 0; i < 10; i++)
		* (arr + i) = i * 3;	//arr[i] = i*3�� ����
	for (int i = 0; i < 10; i++)
		cout << *(pointer + i) << " ";	//arr�� ����Ű�� pointer�� ��� >> arr�� ��µ�
	puts("");

	for (int i = 0; i < 10; i++) {
		*pointer = *pointer + 2;	//pointer�� ����Ű�� ���� 2�� ����.
		pointer++;					//pointer �ּ� 1 ���� - arr[1->2]
	}
	pointer = arr;			//pointer�� �ٽ� arr�� ���� �ּҸ� ����Ų��.
	pointer = pointer + 3;	//pointer + 3�� arr[3]�� ����Ų��
	*pointer = 500;			//pointer�� ���� arr[3] �� 500�� �ִ´�.
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " "; //cout << *(pointer + i)�� ����
	puts("");
}