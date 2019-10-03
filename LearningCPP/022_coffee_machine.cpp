//20191002 book93p_Q14 automatic coffee machine
#include<iostream>
using namespace std;

int main() {
	cout << "MENU - espresso 2000won, americano 2300won, cappuccino 2500won\n";
	char coffee[20]; int jan; int sum = 0;
	while (sum <= 20000) {
		cin >> coffee >> jan;
		if (strcmp(coffee, "espresso") == 0) {
			cout << "It is" << 2000 * jan << "won. Bon appetite¢½\n";
			sum += 2000 * jan;
		}
		else if (strcmp(coffee, "americano") == 0) {
			cout << "It is" << 2300 * jan << "won. Bon appetite¢½\n";
			sum += 2300 * jan;
		}
		else if (strcmp(coffee, "cappuccino") == 0) {
			cout << "It is" << 2500 * jan << "won. Bon appetite¢½\n";
			sum += 2500 * jan;
		}
		else
			cout << "We don't sell like that..\n";
	}
	cout << "Today We Selled " << sum << "won Succesfully! Visit Tomorrow\n";
	return 0;
}