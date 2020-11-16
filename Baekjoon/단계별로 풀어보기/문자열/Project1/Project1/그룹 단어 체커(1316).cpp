#include <iostream>
#include <string>
using namespace std;

int main() {
	int num, i, count = 0;
	string str;
	int arr[26];

	cin >> num;
	for (int j = 0; j < num; j++) {
		cin >> str;
		fill_n(arr, 26, 0);

		arr[str[0] - 97] = 1;

		for (i = 1; i < str.length(); i++) {
			if (str[i - 1] != str[i]) {
				int index = str[i] - 97;
				if (arr[index] == 0)
					arr[index]++;
				else
					break;
			}
		}
		if (i == str.length())
			count++;
	}
	cout << count;

	return 0;
}
