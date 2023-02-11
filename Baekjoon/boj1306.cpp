#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    int maxlight = 0;
    cin >> N >> M;
    
    deque<int> arr;
    
    for (int i = 0; i < 2*M-1; i++) {
          int light;
          cin >> light;
          arr.push_back(light);
          maxlight = max(maxlight, arr[i]); 
    }
    cout << maxlight << ' ';

    while (1) {
          int light;
          int i, maxlight = 0;
          cin >> light;
          
          arr.pop_front();
          arr.push_back(light);
          
          for (int i = 0; i < 2*M-1; i++) {
              maxlight = max(maxlight, arr[i]);
          }
          cout << maxlight << ' ';   

          if (i == N - M + 1) break;
          i++;
    }
}