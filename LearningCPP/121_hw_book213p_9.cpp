//20191114 book213p_9 contact book 주소록 검색 기초
#include<iostream>
using namespace std;

class person {
	string name;
	string tel;
public:
	string getname() { return name; }
	string gettel(string word) { return tel; }
	void set(string name, string tel) {
		this->name = name; this->tel = tel;
	}
};

int main() {
	person saram[3];
	cout << "이름과 전화 번호를 입력해 주세요\n";
	string n, t;
	
	for (int i = 0; i < 3; i++){
		cout << "사람 " << i + 1 << " : ";
		cin >> n >> t;
		saram[i].set(n, t);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << saram[i].getname() << " ";
	}
	cout << "\n전화번호를 검색합니다. 이름 : ";
	cin >> n;
	for (int i = 0; i < 3; i++) {
		if (saram[i].getname() == n)
			cout << saram[i].gettel(n);
	}
}