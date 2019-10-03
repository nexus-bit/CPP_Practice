//20191002 book94p_16 alphabet histogram
#include<iostream>
using namespace std;

int isAlpha(char arr[])
{
	int i = 0; int sum = 0;
	int alphabet[26] = { 0 }; //It is an array which contains number of alphabet([0]:number of a, [25]:number of z)
	while (arr[i] != NULL) //during the sentence ends..
	{
		int charindex = 97; //'a' is 97(ASCII-Code)
		while (charindex <= 122) //comparing input letter to a-z
		{
			if (int(arr[i]) == charindex) { //what kind of letter synchronizes with input data[]?
				alphabet[(charindex - 97)] += 1;//if it is same, alphabet parameter++
				//ex)case of 'c' -> compare a-z -> find c -> alphabet[2]'s data +1 -> and sum+=1
				sum += 1; //counting all kinds of alphabet
			}
			charindex++; //a++ = b, b++ = c++...
		}
		i++;
	}
	//위 작업을 실행하면 alphabet[]배열에 a-z순으로 각각의 갯수가 입력됨

	for (int i = 0; i < 26; i++) { //26 alphabets
		cout << char(i + 97) << " > " << alphabet[i] << "	"; //ex) char(97+2) = c
		for (int j = 0; j < alphabet[i]; j++) //print *
			cout << "*";
		puts("");
	}
	return sum;
}


int main() {
	cout << "write some sentences. please write small letters. I'll draw histogram.\n";
	cout << "After writing, input ';'. you can write ~3000 letters.\n";
	char text[3000] = { 0 };
	cin.getline(text, 3000, ';');

	cout << "Number of letters > " << isAlpha(text);
}