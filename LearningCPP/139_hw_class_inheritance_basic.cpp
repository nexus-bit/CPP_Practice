//20191128 PT8_9p ���
#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	string name;
	int age;
	void set(string n, int a) {
		name = n; age = a;
	}
	void showPoint() {
		cout << "�̸� : " << name << ", ���� : " << age << endl;
	}
};

class Student:public Person {	//Person�� Student�� public�� ��ӹ���
public:
	int num, grade;
	string college;
	void setStudent(int n, string c, int g) {
		num = n; college = c; grade = g;
	}
	void showStudent() {
		cout << "�й� : " << num << ", �а� : " << college << ", �г� : " << grade << endl;
	}
};

int main() {
	Student kim;	//�ڽ��� �θ�(Person)�� public�� ��հ� ����
	kim.set("�����", 22);
	kim.setStudent(17, "�İ�", 1);
	kim.showPoint();
	kim.showStudent();
}