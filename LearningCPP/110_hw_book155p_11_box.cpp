#include<iostream>
#include "110_hw_book155p_11_box.h"
using namespace std;

//class implementation
Box::Box(int w, int h) {
	setSize(w, h);
	fill = '*';
}

void Box::setFill(char f){
	fill = f;
}

void Box::setSize(int w, int h) {
	width = w; height = h;
}

void Box::draw() {
	for (int n = 0; n < height; n++) {
		for (int m = 0; m < width; m++)
			cout << fill;
		cout << endl;
	}

}
