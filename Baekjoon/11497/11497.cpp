#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    int T;
    cin >> T;

    while(T){
        int N;
        cin >> N;
        int arr[N];
        int ans[N];

        for (int i = 0; i < N; i++){
            cin >> arr[i];
        }

        sort(arr, arr + N, compare);

        if (N % 2 == 0) {
            for (int i = 0; i < N / 2; i++){
                ans[i] = arr[N - 1 - 2 * i];
            }
            for (int i = 0; i < N / 2; i++){
                ans[i + N / 2] = arr[2 * i];
            }
        }
        else{
            for (int i = 0; i < N / 2; i++){
                ans[i] = arr[N - 1 - 2 * i];
            }

            ans[N / 2] = arr[0];

            for (int i = 1; i <= N / 2; i++){
                ans[i + N / 2] = arr[2 * i - 1];
            }
        }

        int level = 0;
        for (int i = 1; i < N; i++){
            if(ans[i] - ans[i - 1] > level || ans[i - 1] - ans[i] > level){
                level = ans[i] > ans[i - 1] ? ans[i] - ans[i - 1] : ans[i - 1] - ans[i];
            }
        }

        if(ans[N - 1] - ans[0] > level){
            level = ans[N - 1] - ans[0];
        }

        cout << level << "\n";

        T--;
    }
}