#include <iostream>
using namespace std;

int fibonacci(int num);

int main() {
	int num;
	cin >> num;

	cout << fibonacci(num);

	return 0;
}

int fibonacci(int num) {
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;

	if (num >= 2)
		return fibonacci(num - 2) + fibonacci(num - 1);
}