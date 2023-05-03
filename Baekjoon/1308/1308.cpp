#include <iostream>
using namespace std;

int Month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeap(int year){
    if(year % 4 == 0)
        if(year % 100 != 0 || year % 400 == 0)
            return true;
    return false;
}

int calcDate(int year, int month, int day){
    int total = 0;
    for (int i = 0; i < year; i++){
        total += 365;
        if (isLeap(i))
            total += 1;
    }
    for (int i = 0; i + 1 < month; i++){
        if(i == 1) // Feb
            total += isLeap(year);
        total += Month[i];
    }
    total += day;

    return total;
}

int main(){
    int fromYear, fromMonth, fromDay, toYear, toMonth, toDay;
    cin >> fromYear >> fromMonth >> fromDay;
    cin >> toYear >> toMonth >> toDay;

    int calcFrom, calcTo;
    calcFrom = calcDate(fromYear, fromMonth, fromDay);
    calcTo = calcDate(toYear, toMonth, toDay);

    if (calcTo - calcFrom >= 365243) {
        cout << "gg";
        return 0;
    }

    cout << "D-" << calcTo - calcFrom;
    return 0;
}