#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int student[2][6] = { 0 };

    for (int i = 0; i < N; i++) {
        int m, n;
        cin >> m >> n;

        student[m][n - 1]++;
    }

    int ans = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            ans += student[i][j] / K;
            if(student[i][j] % K != 0){
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}