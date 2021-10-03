#include <iostream>
#include <string>
using namespace std;

int main(){
    int totalTime = 0;
    int time[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

    string dial;
    cin >> dial;

    for (int i = 0; i < dial.length(); i++){
        int idx = dial[i] - 65;
        totalTime += time[idx];
    }
    cout << totalTime << endl;
    return 0;
}