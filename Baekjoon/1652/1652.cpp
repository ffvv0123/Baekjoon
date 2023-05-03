#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    if(N==1){
        cout << 0 << " " << 0;
        return 0;
    }

    char arr[N][N];
    for (int i = 0; i < N;i++){
        for (int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }

    int row = 0, col = 0;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            if(arr[i][j] == '.')
                cnt++;
            else{
                if (cnt >= 2) col++;
                cnt = 0;
            }
        }
        if (cnt > 1) {
            col++;
            cnt = 0;
        }
        cnt = 0;
    }

    cnt = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[j][i] == '.')
                cnt++;
            else {
                if (cnt >= 2) row++;
                cnt = 0;
            }
        }
        if(cnt > 1){
            row++;
            cnt = 0;
        }
        cnt = 0;
    }

    cout << col << " " << row;
}