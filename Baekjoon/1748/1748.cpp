#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string N;
    cin >> N;

    int size = N.length();

    int ans = 0;
    for (int i = 0; i < size - 1; i++){
        ans += 9 * (i + 1) * pow(10, i);
    }
    
    int calc = size * (stoi(N) - pow(10, size - 1) + 1);
    ans += calc;
    cout << ans;
}