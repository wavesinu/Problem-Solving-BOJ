#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> Yen = {500, 100, 50, 10, 5, 1};
    int count = 0;

    int pay;
    cin >> pay;
    pay = 1000 - pay;

    for (int i = 0; i < 6; i++){
        while (pay - Yen[i] >= 0)
        {
            pay -= Yen[i];
            count++;
            if (pay == 0)
                break;
        }
    }
    cout << count << '\n';
    return 0;
}