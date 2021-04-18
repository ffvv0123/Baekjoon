#include <iostream>
using namespace std;

int getNum(int k, int n);

int main() {
	int T;		
	int k, n;	

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << getNum(k, n) << endl;
	}

	return 0;
}

int getNum(int k, int n) {
	if (n == 1)
		return 1;

	if (k == 0)
		return n;

	return (getNum(k - 1, n) + getNum(k, n - 1));
}
