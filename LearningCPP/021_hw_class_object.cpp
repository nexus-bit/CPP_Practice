//°úÁ¦ - 20191002 PT3_13p CLASS practice
#include<iostream>
using namespace std;

class Student {
public:
	int id;
	string homeTelephone;
	int grade;
	string getLocal ();
	int getEntYr();
};

string Student::getLocal() {
	if ((homeTelephone[1] == '2') || ((homeTelephone[1] == '3') && (homeTelephone[2] == '2') || (homeTelephone[2] == '1')))
		return "Capital\n";
	else
		return "Local\n";
}

int Student::getEntYr() {
	return id / 100000;
}


int main() {
	Student sungsu;
	sungsu.id = 1626049;
	sungsu.homeTelephone = "032-747-1624";
	sungsu.grade = 2;
	cout << "sungsu's home is " << sungsu.getLocal();
	cout << "sungsu entered KNUT at " << sungsu.getEntYr();
	puts("\n");
	Student minkyung;
	minkyung.id = 1526032;
	minkyung.homeTelephone = "064-752-0537";
	minkyung.grade = 24;
	cout << "minkyung's home is " << minkyung.getLocal();
	cout << "minkyung entered KNUT at " << minkyung.getEntYr();
	puts("\n");
}