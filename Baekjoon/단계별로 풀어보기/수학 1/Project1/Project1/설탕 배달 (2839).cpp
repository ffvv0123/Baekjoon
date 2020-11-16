#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int num3 = 0;
	int num5 = 0;

	while (num % 5 != 0 && num >= 0) {
		num -= 3;
		num3++;
	}

	if (num < 0)
		cout << -1 << '\n';
	else {
		num5 = num / 5;
		cout << num3 + num5 << '\n';
	}

	return 0;
}
