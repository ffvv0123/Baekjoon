#include <iostream>
using namespace std;

void hanoi(int num, int start, int second, int third);

int main() {
	int num;
	cin >> num;

	int trial = 1;

	for (int i = 0; i < num; i++) {
		trial *= 2;
	}
	trial--;

	cout << trial << '\n';
	hanoi(num, 1, 2, 3);

	return 0;
}

void hanoi(int num, int start, int second, int third) {
	if (num == 1)
		cout << start << " " << third << '\n';
	else {
		hanoi(num - 1, start, third, second);
		cout << start << " " << third << '\n';
		hanoi(num - 1, second, start, third);
	}
}