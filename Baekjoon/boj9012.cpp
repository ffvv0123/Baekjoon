#include <iostream>
#include <stack>
#include <string>
using namespace std;

string vps(string str) {
      stack <char> s;
      int size = str.length();
      
      for (int i = 0; i < size; i++) {
          if(str[i] == '(') {
                s.push('(');
          }
          else if(str[i] == ')') {
              if(s.empty()) return "NO";
              s.pop();
          }
    }
    if(s.empty()) return "YES";
    else return "NO";                                                
}

int main(){
      int n;
      cin >> n;
      
      for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            cout << vps(s) << '\n';
        }    
}
