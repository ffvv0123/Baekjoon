#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string S, T;
    cin >> S;
    cin >> T;

    while(S.size() != T.size()){
        if (T[T.size() - 1] == 'A') {
            T = T.substr(0, T.size() - 1);
        } 
        else if (T[T.size() - 1] == 'B') {
            T = T.substr(0, T.size() - 1);
            reverse(T.begin(), T.end());
        }
    }

    if(!S.compare(T))
        cout << 1;
    else
        cout << 0;

    return 0;
}