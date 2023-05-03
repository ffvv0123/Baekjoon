#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string word;
vector<string> c;

int main(){
    cin >> word;

    vector<int> selected;
    for (int i = 0; i < word.length() - 3; i++)
        selected.push_back(0);
    for (int i = 0; i < 2; i++)
        selected.push_back(1);

    do{
        pair<int, int> p = make_pair(-1, -1);
        for (int i = 0; i < word.length() - 1; i++) {
            if(selected[i]){
                if (p.first == -1)
                    p.first = i + 1;
                else
                    p.second = i + 1;
            }
        }
        string tmp = word;
        reverse(tmp.begin(), tmp.begin() + p.first);
        reverse(tmp.begin() + p.first, tmp.begin() + p.second);
        reverse(tmp.begin() + p.second, tmp.end());

        c.push_back(tmp);
    } while (next_permutation(selected.begin(), selected.end()));

    sort(c.begin(), c.end());
    cout << c[0];

    return 0;
}