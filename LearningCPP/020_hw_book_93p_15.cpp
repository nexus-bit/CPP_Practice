//���� - 20190926 book93p_15 ������ ������ ��Ģ����
#include<iostream>
using namespace std;

int main() {
	cout << "��Ģ ���� > ";
	char arr[15] = { 0 };
	cin.getline(arr, 15, '\n'); //����Ű�� ������� �޾Ƶ���

	char arr1[5], calc, arr2[5]; //������ �������� �����ؼ� �޾Ƶ��� ���� ����

	int i = 0; //i�� �ʱ�ȭ�����ʰ� ��� 1�� ����(arr�Լ� ����)
	int j = 0; //j�� while�� ������ �ʱ�ȭ ��
	while (arr[i] != ' ') { //���� ���� ���ڴ� arr1�� �Է�
		arr1[j] = arr[i];
		i++; j++;
	}
	i += 1;
	cout << atoi(arr1) << " "; //�׽�Ʈ���

	calc = arr[i]; //�����ڴ� ���� calc�� �޾Ƶ���
	i++; i++; //������ �������� ������ ������ i ����
	cout << calc << " "; //�׽�Ʈ���

	j = 0;
	while (j < 5) { //������ ���� �ڿ��� ������ �����Ƿ� ������ �պ���
		arr2[j] = arr[i]; //�����ڵ� ���� ���� ����(5�ڸ�����) arr2�� �޾Ƶ���
		i++; j++;
	}
	cout << atoi(arr2) << " = "; //�׽�Ʈ���

	if (calc == '+') //�����ڸ� ���� ���� calc�� ���� ��� ����
		cout << atoi(arr1) + atoi(arr2);
	else if (calc == '-')
		cout << atoi(arr1) - atoi(arr2);
	else if (calc == '/')
		cout << atoi(arr1) / atoi(arr2);
	else if (calc == '*')
		cout << atoi(arr1) * atoi(arr2);
	else if (calc == '%')
		cout << atoi(arr1) % atoi(arr2);
	else
		cout << "������ ����";
}

////���� 2 - ���ͳ� ����
//#define _CRT_SECURE_NO_WARNINGS //strok()�Լ� ������ ����
//#include <iostream>
//using namespace std;
//int add(int a, int b); //�ȱ׷��� ������ ���� �Լ��� ���� ��� ����
//int sub(int a, int b);
//int mul(int a, int b);
//int divi(int a, int b);
//int rem(int a, int b);
//int main() {
//    char text[100];
//    char *ptr = NULL; //�����ͷ� ���� ����??
//    int left, right;
//    for (;;) { //���ѹݺ�
//        cout << "? ";
//        cin.getline(text, 100); //����Ű�� ������� �޾Ƶ���
//        left = atoi(strtok(text, " ")); //strok�� text�� ���� ������ �޾Ƶ鿩 left�ǿ����� ������ �����
//        ptr = strtok(NULL, " "); //�����ڴ� ptr�� ����
//        right = atoi(strtok(NULL, " ")); //strok�� text�� ���� ������ �޾Ƶ鿩 right�ǿ����� ������ �����
//        if (*ptr == '+') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << add(left, right) << endl; //������ ptr ���� ���� ���ǿ� ���� ���
//        }
//        else if (*ptr == '-') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << sub(left, right) << endl;
//        }
//        else if (*ptr == '*') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << mul(left, right) << endl;
//        }
//        else if (*ptr == '/') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << divi(left, right) << endl;
//        }
//        else if (*ptr == '%') {
//            cout << left << ' ' << ptr << ' ' << right << " = " << rem(left, right) << endl;
//        }
//        else
//            cout << "�Է��̻�" << endl;
//    }
//}
//int add(int a, int b) {
//    return a + b;
//}
//int sub(int a, int b) {
//    return a - b;
//}
//int mul(int a, int b) {
//    return a * b;
//}
//int divi(int a, int b) {
//    return a / b;
//}
//int rem(int a, int b) {
//    return a % b;
//}