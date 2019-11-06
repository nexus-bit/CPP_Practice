//It prints every second - 'Sleep' makes it rest each milliseconds.
#include <iostream>
#include <windows.h>
#define ONE_SECOND 1000
using namespace std;

int main(int argc, char* argv[]) {
	int s = 1;
	while (1) {
		cout << s << "seconds has passed.\n";
		Sleep(ONE_SECOND);
		s++;
	}
}
