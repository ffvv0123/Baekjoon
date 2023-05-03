#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, P;
    cin >> N >> P;

    int depth[N];
    int pizza[P];
    int ans[N];

    for (int i = 0; i < N; i++){
        cin >> depth[i];
        if(i != 0 && depth[i-1] < depth[i])
            depth[i] = depth[i - 1];
    }
    for (int i = 0; i < P;i++){
        cin >> pizza[i];
    }

    int cnt = 0;
    for (int i = N - 1; i >= 0; i--){
        if(pizza[cnt] <= depth[i]){
            ans[cnt] = i + 1;
            cnt++;
        }
        if (cnt == P) break;
    }

    if(cnt == P){
        cout << ans[cnt - 1] << "\n";
    }
    else{
        cout << 0;
    }

    return 0;
}