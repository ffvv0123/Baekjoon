#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int fiveWon = n / 5; 
    if(n % 5 == 0){
        cout << fiveWon;
        return 0;
    }
    while (fiveWon >= 0){
        int result = (n - 5 * fiveWon) % 2;
        int twoWon = (n - 5 * fiveWon) / 2;
        if (result == 0){
            cout << fiveWon + twoWon;
            return 0;
        }
        fiveWon--;
    }
    cout << -1;
    return 0;
}

/*
입력된 돈에서 5원이 최대가 되는 경우에서 불가능 하면 하나씩 줄여가면서 계산
만약 n이 5로 나누어 떨어지면 바로 출력 (best case)

이제 while루프로 5원을 하나씩 줄인다.
결과가 연산의 결과가 0이 된다면 케이스 성립 -> 출력
결과는 전체에서 5원의 갯수만큼 빼고, 2로 나눈 나머지
나머지가 0이면 나누어 성립, 1이라면 1원이 남는 상황 -> 불가능
그렇게 설계해서 출력하면 됨
*/