#include <iostream>
using namespace std;

int blue = 0, white = 0;
int sqaure[128][128];

int color(int x, int y, int n){
    int cmp = sqaure[x][y];
    for(int i=x; i<x+n; i++)
        for(int j=y; j<y+n; j++)
            if(cmp != sqaure[i][j])
                return -1;
    return cmp;            
}

void quadtree(int x, int y, int n){
    if (n==1){
        if(sqaure[x][y] == 1) 
            blue++;
        else 
            white++;
    }
    
    else{
        if(color(x, y, n) == 1) blue++;
        else if(color(x, y, n) == 0) white++;
        else{
            quadtree(x, y, n/2);
            quadtree(x + n/2, y, n/2);
            quadtree(x, y + n/2, n/2);
            quadtree(x + n/2, y+ n/2, n/2);
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    for(int x=0; x<n; x++)
        for(int y=0; y<n; y++)
            cin >> sqaure[x][y];
            
    quadtree(0, 0, n);
    
    cout << white << '\n' << blue;
    return 0;
}