#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int count = 0;

	for (int i = 0; !(N - 1 < 0); i++) {
		N -= 6 * i;
		if (N == 1) {
			count = i;
			break;
		}
		count = i;
	}
	cout << count + 1;
}