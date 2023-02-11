#include <iostream>
using namespace std;

int greedy(int n, int arr[], int price) {
      int cnt = 0;
      for (int i = n - 1; i >=0; i--) {
            cnt += price / arr[i];
            price %= arr[i];
      }
      return cnt;
}

int main() {
      int n, price;
      cin >> n >> price;
      int coin[n];
      for (int i = 0; i < n; i++) {
            cin >> coin[i];
      }
      cout << greedy(n, coin, price);
}