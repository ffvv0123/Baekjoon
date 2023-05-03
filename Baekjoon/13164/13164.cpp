#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, K;
    int ans = 0;
    cin >> N >> K;

    int student[N];
    int cost[N - 1];

    for (int i = 0; i < N; i++) {
        cin >> student[i];
    }

    for (int i = 1; i < N; i++){
        cost[i - 1] = student[i] - student[i - 1];
    }

    sort(cost, cost + N - 1);

    for (int i = 0; i < N - K; i++){
        ans += cost[i];
    }
    
    cout << ans;

    return 0;
}
