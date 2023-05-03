#include <iostream>
#include <string>
using namespace std;

int main(){
    string N;
    int number[10] = {0,};

    cin >> N;

    for (int i = 0; i < N.length(); i++) {
        if(N[i] != '9'){
            number[N[i] - '0']++;
        }
        else
            number[6]++;
    }

    int max = 0;
    for (int i = 0; i < 10; i++){
        if (i == 6){
            ;
        } else {
            if(number[i] > max){
                max = number[i];
            }
        }
    }
    int checker = number[6] / 2 + number[6] % 2;

    cout << ((checker > max) ? checker : max);
}