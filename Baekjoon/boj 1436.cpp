#include <iostream>
#include <string>
using namespace std;

bool check666(int num){
    string s = to_string(num);
    if (s.find("666") == string::npos){
        return false;
    }
    else return true;
}

int main() {
    int N;
    cin >> N;
    
    int cnt = 0, i = 666;
    
    while(cnt != N){
        if(check666(i)) {
            cnt++;
        }
        i++;
    }
    
    cout << i - 1;
    return 0;
}