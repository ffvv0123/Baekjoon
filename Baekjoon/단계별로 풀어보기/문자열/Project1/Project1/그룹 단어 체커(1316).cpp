#include <iostream>
#include <string>
using namespace std;

bool group(string str);

int main() {
	int num;
	string str;
	int count = 0;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> str;
		if (group(str))
			count++;
	}
	cout << count;

	return 0;
}

bool group(string str) {
	bool alphabet[26] = { false };

}