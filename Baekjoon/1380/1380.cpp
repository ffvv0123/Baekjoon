#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int trial = 1;
    while (1) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        cin.ignore();

        vector<string> v;
        for (int i = 0; i < n; i++){
            string name;
            getline(cin, name);
            v.push_back(name);
        }

        int list[n];
        for (int i = 0; i < n; i++)
            list[i] = 0;

        for (int i = 0; i < 2 * n - 1; i++) {
            int num;
            string s;
            cin >> num >> s;
            if (list[num - 1] == 0) list[num - 1] = 1;
            else
                list[num - 1] = 0;
        }
        for (int i = 0; i < n;i++){
            if(list[i] == 1){
                cout << trial << " " << v[i] << "\n";
                trial++;
                break;
            }
        }
    }
}