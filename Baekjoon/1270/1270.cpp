#include <algorithm>
#include <iostream>
#include <map>
using namespace std;


// bool compare(const pair<int, int> &a, const pair<int, int> &b) {
//     return a.second > b.second;
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--){
        map<long, int> cnt;
        long ret = 0, idx = -1;
        int N;
        cin >> N;
        for (int i = 0; i < N; i++){
            long num;
            cin >> num;
            long tmp = ++cnt[num];
            if(tmp > ret){
                idx = num;
                ret = tmp;
            }
        }
        if (ret > N / 2) cout << idx << "\n";
        else
            cout << "SYJKGW\n";
    }

    return 0;
}

/*
    for (int i = 0; i < N; i++) {
        cin >> T;
        int arr[T];
        for (int i = 0; i < T; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + T);
        pair<int, int> p[T];

        int cnt = 1;
        for (int i = 0; i < T; i++) {
            if (i > 0 && arr[i - 1] != arr[i])
                cnt = 1;
            p[i].first = arr[i];
            p[i].second = cnt;
            cnt++;
        }
        sort(p, p + T, compare);
        if (p[0].second > T / 2)
            cout << p[0].first << "\n";
        else
            cout << "SYJKGW\n";
    }
*/