#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int total = 0;

    while (N >= 0){
        if (N % 5 == 0)
        {
            total += (N / 5);
            cout << total << endl;
            return 0;
        }
        N -= 3;
        total++;
    }
    cout << -1 << endl;
}