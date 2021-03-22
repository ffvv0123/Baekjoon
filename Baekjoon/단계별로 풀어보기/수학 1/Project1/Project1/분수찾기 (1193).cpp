#include <iostream>
using namespace std;

void FindNum(int X, int *N, int *a);

int main() {
	int X;
	cin >> X;

	int N = 1, a = 0;

	FindNum(X, &N, &a);

	if (N % 2 == 0) {
		if (a == 0)
			cout << N << '/' << 1;
		else
			cout << N + 2 - a << '/' << a;
	}

	if (N % 2 != 0) {
		if (a == 0)
			cout << 1 << '/' << N;
		else
			cout << a << '/' << N + 2 - a;
	}

	return 0;
}

void FindNum(int X, int *N, int *a) {
	int i = 1;
	int count = 0;
	int sum = 0;

	while (1) {
		X -= i;
		sum += i;
		i++;
		count++;
	

		if (X < 0) {
			*N = count - 1;
			*a = X + i - 1;

			break;
		}

		if (X == 0) {
			*N = count, * a = 0;
			break;
		}	
	}
}