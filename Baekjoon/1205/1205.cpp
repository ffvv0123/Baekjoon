#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, newScore, P;
    cin >> N >> newScore >> P;
    vector<int> rank(N);

    for (int i = 0; i < N; i++){
        int score;
        cin >> score;
        rank[i] = score;
    }

    if (N != 0) {
        if (N >= P && newScore <= rank[N - 1]) cout << -1;
        else{
            int cnt = 1;
            for (int i = 0; i < N; i++){
                if (newScore < rank[i]){
                    if (i <= N - 2)
                        cnt++;
                    else{
                        cout << ++cnt;
                    }
                }
                    
                else if (newScore == rank[i]){
                    if (i <= N - 2)
                        continue;
                    else
                        cout << cnt;
                }
                else {
                    cout << cnt;
                    break;
                }
            }
        }
    }

    else{
        if (P > 0)
            cout << 1;
        else
            cout << -1;
    }
}