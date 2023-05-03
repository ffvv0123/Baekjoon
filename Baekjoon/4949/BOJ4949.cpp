#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> v;

    while(true){
        string s;
        getline(cin, s);
        if(s == ".")
            break;
        v.push_back(s);
        //if (s[s.size() - 1] == '.')
    }



    for (int i = 0; i < v.size(); i++) {
        stack<char> checker;
        bool ans = true;
        for (int j = 0; j < v[i].size(); j++) {
            switch (v[i][j])
            {
            case '(':
            case '[':
                checker.push(v[i][j]);
                break;
            case ')':
                if (!checker.empty() && checker.top() == '('){
                    checker.pop();
                }
                else{
                    ans = false;
                    break;
                }
                break;
            case ']':
                if (!checker.empty() && checker.top() == '['){
                    checker.pop();
                }
                else{
                    ans = false;
                    break;
                }                    
                break;
            }
        }
        if(ans && checker.empty())
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}