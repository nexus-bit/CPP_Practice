//20191128 PT8_9p 상속
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
		cout << "이름 : " << name << ", 나이 : " << age << endl;
	}
};

class Student:public Person {	//Person은 Student의 public을 상속받음
public:
	int num, grade;
	string college;
	void setStudent(int n, string c, int g) {
		num = n; college = c; grade = g;
	}
	void showStudent() {
		cout << "학번 : " << num << ", 학과 : " << college << ", 학년 : " << grade << endl;
	}
};

int main() {
	Student kim;	//자식은 부모(Person)의 public을 꿰뚫고 있음
	kim.set("김쏭쑤", 22);
	kim.setStudent(17, "컴공", 1);
	kim.showPoint();
	kim.showStudent();
}