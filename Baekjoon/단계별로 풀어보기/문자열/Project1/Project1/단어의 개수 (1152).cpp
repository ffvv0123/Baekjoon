#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	int count = 0;

	getline(cin, S);
	int size = S.length();

	for (int i = 0; i < size; i++) {
		if (S[i] == ' ')
			count++;
	}

	if (S[0] == ' ')
		count--;
	if (S[size - 1] == ' ')
		count--;
	count++;

	cout << count << endl;

	return 0;
}