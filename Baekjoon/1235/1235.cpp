#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> v;

    for (int i = 0; i < N; i++){
        string str;
        cin >> str;
        reverse(str.begin(), str.end());
        v.push_back(str);
    }

    int cnt = 1;
    while(1){
        set<string> s;
        for (int i = 0; i < v.size(); i++)
            s.insert(v[i].substr(0, cnt));
        if(s.size() == v.size())    // set은 중복이 있으면 제거 -> 학생 수 = set -> 겹치는게 없음
            break;
        else
            cnt++;
    }
    cout << cnt;

    return 0;
}