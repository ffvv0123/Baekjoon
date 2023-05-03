#include <iostream>
#define MAX 1001
using namespace std;

// cost 2D-array
int cost[MAX][3];

// cumulative cost
int cumCost[MAX][3];

int min(int a, int b){
    return a < b ? a : b;
}

int min(int a, int b, int c){
    int temp = min(a, b);
    return temp < c ? temp : c;
}

int dp(int n){

    cumCost[0][0] = cost[0][0];
    cumCost[0][1] = cost[0][1];
    cumCost[0][2] = cost[0][2];

    for (int i = 1; i < n; i++)
        for (int j = 0; j < 3; j++){
            if(j==0){
                cumCost[i][0] = cost[i][0] + min(cumCost[i - 1][1], cumCost[i - 1][2]);
            } else if (j == 1) {
                cumCost[i][1] = cost[i][1] + min(cumCost[i - 1][0], cumCost[i - 1][2]);
            }else{
                cumCost[i][2] = cost[i][2] + min(cumCost[i - 1][0], cumCost[i - 1][1]);
            }
        }
    return min(cumCost[n-1][0], cumCost[n-1][1], cumCost[n-1][2]);
}

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> cost[i][j];
        }
    }

    cout << dp(n);

    return 0;
}
