#include <iostream>
using namespace std;

long long fibo(int n){
    long long arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;

    if(n == 0){return 0;}
    if(n == 1){return 1;}

    for(int i=2; i <= n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr[n];
}

int main(){
    int n;
    cin >> n;

    cout << fibo(n);

    return 0;
}