#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
    return a.second < b.second;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    long long ans = 0;
    vector<pair<int, int>> score;
    
    long long a, b;
    
    for(int i=0; i<n; i++){
        cin >> a >> b;
        score.push_back(make_pair(a, b));
    }
    
    sort(score.begin(), score.end(), cmp);
    
    for(int i=0; i<k; i++){
        ans += score[n-1-i].first;
        score.pop_back();
    }
    
    sort(score.begin(), score.end());
    
    for(int i=0; i<m; i++){
        ans += score[n-k-1-i].first;
        score.pop_back();
    }
    
    cout << ans;
    
    return 0;
}