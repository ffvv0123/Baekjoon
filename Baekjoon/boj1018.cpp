#include <iostream>
#include <algorithm>
using namespace std;

int checker(int i, int j, char(*board)[50]) {
      cout << i << ' ';
      return 1;
}

int main(){
     char board[50][50] = {'\0'};
     int N, M;
     cin >> N >> M;
     
     for(int i = 0; i < N; i++){
           for(int j = 0; j < M; j++){
                 char chess;
                 cin >> chess;
                 board[i][j] = chess;
           }               
     }  
    
     int exmin = 50;
      for(int i = 0; i < N - 7; i++){
           for(int j = 0; j < M - 7; j++){
                 int ex = checker(i, j, board);
                 exmin = min(exmin, ex);  
           }                 
     }
     cout << exmin;                                          
}