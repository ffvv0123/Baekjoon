#include <iostream>
using namespace std;

int N, S; // 스위치 개수, 학생 수
bool status[100]; // 스위치 상태

int main(){
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> status[i];
    cin >> S;

    for (int i = 0; i < S; i++){
        int gender, number;
        cin >> gender >> number;
        number--;

        if(gender == 1){
            for (int i = 1; i <= N; i++) {
                if((number + 1) * i <= N)
                    status[(number + 1) * i - 1] = !status[(number + 1) * i - 1];
                else
                    break;
            }
        }

        else{
            status[number] = !status[number];
            for (int i = 1; i < N / 2; i++){
                if(number - i < 0 || number + i >= N)
                    break;
                else{
                    int cnt = 0;
                    if (status[number - i] == status[number + i]) {
                        status[number - i] = !status[number - i];
                        status[number + i] = !status[number + i];
                    }
                    else
                        break;
                }
            }
        }
    }

    for (int i = 0; i < N; i++){
        cout << status[i] << " ";
        if ((i + 1) % 20 == 0) cout << "\n";
    }

    return 0;
}