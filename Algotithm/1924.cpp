#include <iostream>
using namespace std;

int main(){
    int M, D;
    cin >> M >> D;

    int MonthDate[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int TotalDate;
    TotalDate += D;

    for (int i = 0; i < M - 1; i++){
        TotalDate += MonthDate[i];
    }

        switch (TotalDate%7)
        {
        case 0:
            cout << "SUN";
            break;
        case 1:
            cout << "MON";
            break;
        case 2:
            cout << "TUE";
            break;
        case 3:
            cout << "WED";
            break;
        case 4:
            cout << "THU";
            break;
        case 5:
            cout << "FRI";
            break;
        case 6:
            cout << "SAT";
            break;
    }
}