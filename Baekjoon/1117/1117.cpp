#include <iostream>
using namespace std;

long W, H, f, c, x1, y1, x2, y2;
// 너비 높이
// 접는 세로선, 일정하게 접는 가로선
// 직사각형 좌표

int main(){
    cin >> W >> H >> f >> c >> x1 >> y1 >> x2 >> y2;

    long surface = W * H;
    long rect = (x2 - x1) * (y2 - y1);
    long range = (f > W / 2) ? W - f : f;

    if(range <= x1){
        surface -= (c + 1) * rect;
    }
    else if(range < x2){
        surface -= 2 * (c + 1) * (y2 - y1) * (range - x1);
        surface -= (c + 1) * (y2 - y1) * (x2 - range);
    }
    else{
        surface -= 2 * (c + 1) * rect;
    }

    cout << surface;

    return 0;
}