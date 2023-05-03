#include<iostream>
using namespace std;

int main() { 
    string s, ans;
    int alpha[26] = {0};
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int idx = s[i] - 'A';
        alpha[idx] = alpha[idx] + 1;
    }

    int cnt = 0;;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] % 2 == 1) cnt++;
    }

    if (cnt > 1)
        cout << "I'm Sorry Hansoo";
    else {
        for (int i = 0; i < 26; i++){
            for (int j = 0; j < alpha[i] / 2; j++)
                ans += i + 'A';
        }

        for (int i = 0; i < 26; i++)
            if(alpha[i] % 2)
                ans += i + 'A';

        for (int i = 25; i >= 0; i--)
            for (int j = 0; j < alpha[i] / 2; j++)
                ans += i + 'A';
    }
    cout << ans;
}