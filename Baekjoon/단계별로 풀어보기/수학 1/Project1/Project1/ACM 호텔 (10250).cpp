#include <iostream>
using namespace std;

int main() {
	int T;
	int H, W, N;

	cin >> T;

	while (T) {
		cin >> H >> W >> N;

		int H1, W1;
		H1 = N % H;
		W1 = N / H;

		if (H1 > 0)
			W1++;
		else
			H1 = H;

		cout << H1 * 100 + W1 << endl;
		T--;
	}
	
	return 0;
}