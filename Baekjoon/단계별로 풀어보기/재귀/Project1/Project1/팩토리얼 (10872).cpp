#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
	int number;
	cin >> number;
	cout << factorial(number);

	return 0;
}

int factorial(int num) {
	if (num <= 1)
		return 1;
	return num * factorial(num - 1);
}