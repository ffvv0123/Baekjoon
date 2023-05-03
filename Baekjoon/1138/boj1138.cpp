#include<iostream>
using namespace std;

int main(){
    // Input
    int N, num;
    cin >> N;
    int ans[10] = {0};
    for (int i = 0; i < N; i++){
        cin >> num;

        for (int j = 0; j < N; j++){
            if(num == 0 && ans[j] == 0){
                ans[j] = i + 1;
                break;
            }
            else if(ans[j] == 0)
                num--;
        }
    }
    

    for (int i = 0; i < N; i++)
        cout << ans[i] << endl;

    return 0;
}