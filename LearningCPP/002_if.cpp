//爽汐坦軒 ctrl AKC 背薦 AKU
#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "繊呪研 脊径馬室推 : ";
	cin >> score;

	while (score > 100){
		cout << "臣郊献 収切研 脊径馬獣神 : ";
		cin >> score;
		}

	if (score >= 90)
		cout << "雁重 A 呪敬. 逐馬杯艦陥.";
	else if (score >= 80)
		cout << "雁重 B 呪敬. 焼襲革推.";
	else if (score >= 70)
		cout << "雁重 C 呪敬. 因採馬室推.";
	else if (score >= 60)
		cout << "雁重 D 呪敬. F亜 焼観惟 嬢巨醤.";
	else
		cout << "雁重 F呪敬. せせせせせせ";
		
	return 0;
}
