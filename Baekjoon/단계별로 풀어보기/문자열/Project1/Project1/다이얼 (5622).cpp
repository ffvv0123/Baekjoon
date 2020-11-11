#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int alpha[26] = { 2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9 };
	int count = 0;
	cin >> str;
	int size = str.length();

	for (int i = 0; i < size; i++) 
		count += alpha[int(str[i])-65];

	cout << count + size;

	return 0;
}