#include <iostream>
#include <string>
using namespace std;

string getP(string S, int R);

int main() {
	int Test;
	int R;
	string S;

	cin >> Test;
	for (int i = 0; i < Test; i++) {
		cin >> R >> S;
		cout << getP(S, R) << endl;
	}

	return 0;
}

string getP(string S, int R) {
	string P = "";
	int size = S.length();

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < R; j++) {
			P += S[i];
		}
	}

	return P;
}