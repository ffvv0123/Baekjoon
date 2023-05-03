#include <iostream>
#include <algorithm>
using namespace std;

int abs(int a, int b){
    return a > b ? a - b : b - a;
}

int main(){
    int N;
    cin >> N;

    int arr[N];
    int result = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    do{
        int tmp = 0;
        for (int i = 0; i < N - 1;i++){
            tmp += abs(arr[i] - arr[i + 1]);
        }
        result = max(result, tmp);
    } while (next_permutation(arr, arr + N));

    cout << result;
}

/*
N = 8 -> full case: 8! -> brute force
주어진 연산 때리고 임시값 저장, 큰 값을 result에 저장

처음은 result가 없으니 일단 한번 수행시킴
그리고 do-while문 실행
배열의 가짓수는 모든 순열을 생각하면 되니까 next_permutation으로 접근
*/