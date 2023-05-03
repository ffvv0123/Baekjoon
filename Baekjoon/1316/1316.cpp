#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> s;
    int alpha[26] = {0};
    int ans = 0;

    for (int i = 0; i < N; i++){
        string word;
        cin >> word;
        s.push_back(word);
    }

    for (int i = 0; i < N;i++){
        vector<char> v(s[i].begin(), s[i].end());
        bool checker = true;
        char check = v[0];
        alpha[v[0] - 'a']++;
        for (int j = 1; j < s[i].length(); j++) {
            if (v[j - 1] != v[j] && alpha[v[j] - 'a'] > 0) {
                checker = false;
                break;
            } else {
                alpha[v[j] - 'a']++;
            }
        }
        if (checker) ans++;
        for (int i = 0; i < 26; i++)
            alpha[i] = 0;
    }

    cout << ans;
    return 0;
}