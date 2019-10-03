//주석처리 ctrl AKC 해제 AKU
#include<iostream>
using namespace std;

int main() {
	int arr[10];
	int* pointer = arr;	//pointer는 arr의 시작 주소이다.
	//arr에 &가 없는 이유는 c++에선 배열은 주소로 친다.
	
	for (int i = 0; i < 10; i++)
		* (arr + i) = i * 3;	//arr[i] = i*3과 동일
	for (int i = 0; i < 10; i++)
		cout << *(pointer + i) << " ";	//arr를 가르키는 pointer를 출력 >> arr이 출력됨
	puts("");

	for (int i = 0; i < 10; i++) {
		*pointer = *pointer + 2;	//pointer가 가르키는 값에 2를 더함.
		pointer++;					//pointer 주소 1 증가 - arr[1->2]
	}
	pointer = arr;			//pointer는 다시 arr의 시작 주소를 가르킨다.
	pointer = pointer + 3;	//pointer + 3은 arr[3]을 가르킨다
	*pointer = 500;			//pointer를 통해 arr[3] 에 500을 넣는다.
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " "; //cout << *(pointer + i)과 동일
	puts("");
}