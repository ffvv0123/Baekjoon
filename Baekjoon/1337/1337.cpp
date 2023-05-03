#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);
    int ans = 1;
    for (int i = 0; i < N; i++){
        int cnt = 1;
        for (int j = i + 1; j < i + 5;j++){
            if(arr[j] - arr[i] < 5 && arr[j] - arr[i] > 0)
                cnt++;
        }
        ans = max(ans, cnt);
    }
    if (ans >= 5) cout << 0;
    else
        cout << 5 - ans;
}