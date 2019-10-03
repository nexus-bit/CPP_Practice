//°úÁ¦ - 20190918 pt1.5_34p
#include<iostream>
using namespace std;

void equalarray(int* p, int* q, int*r, int size){
		for (int i = 0; i < size; i++) {
			if (*p == *q)
				*(r + i) = 1;
		p++;
		q++;
	}
}

void printarray(int* x, int size){
	for (int i = 0; i < size; i++){
		cout << *x << " ";
		x++;
	}
	puts("");
}

int main(){
	int a[] = { 1,2,3,4,5 };
	int b[] = { 2,5,3,2,5 };
	int result[5] = { 0 };
	cout << "a = "; printarray(a, 5);
	cout << "b = "; printarray(b, 5);
	equalarray(a, b, result, 5);
	cout << "result = "; printarray(result, 5);
}