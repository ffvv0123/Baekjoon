#include <iostream>
using namespace std;

int sumNum(int num);

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < 1000000; i++) {
		if (sumNum(i) == N) {
			cout << i;
			return 0;
		}
	}

	cout << 0;
	return 0;
}


int sumNum(int num) {
	int sum = num;

	while (num / 10 != 0) {
		sum += num % 10;
		num /= 10;
	}
	sum += num % 10;
	
	return sum;
}