#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B, tmp;
	int size = 3;
	cin >> A >> B;

	tmp = A;
	A[0] = tmp[2];
	A[2] = tmp[0];

	tmp = B;
	B[0] = tmp[2];
	B[2] = tmp[0];

	int big = stoi(A) >= stoi(B) ? stoi(A) : stoi(B);
	cout << big;

	return 0;
}