#include <iostream>
using namespace std;

int main() {
	int N, check = 0;
	cin >> N;
	
	int weight[50] = { 0 };
	int height[50] = { 0 };

	for (int i = 0; i < N; i++)
		cin >> weight[i] >> height[i];

	for (int i = 0; i < N; i++) {
		check = 0;
		for (int j = 0; j < N; j++) {
			if (weight[i] < weight[j] && height[i] < height[j])
				check++;
		}
		cout << check + 1 << ' ';
	}

	return 0;
}