#include<iostream>
using namespace std;
#include "110_hw_book155p_11_box.h"

int main() {
	Box b(10, 2);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();
}