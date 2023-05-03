#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    int cnt = 0;
    vector<string> v;

    cin >> n >> m;
    int tmp = m;
    while(n--){
        int book;
        cin >> book;
        if(tmp-book<0){
            cnt++;
            tmp = m;
        }
        tmp -= book;
    }
    if (tmp == m) cout << cnt;
    else
        cout << cnt + 1;

    return 0;
}