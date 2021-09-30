#include <iostream>
using namespace std;
const int cline = 40;

int main(){
    int score[5];
    int sum = 0;

    for (int i = 0; i < 5; i++){
        cin >> score[i];

        if(score[i]<cline){
            score[i] = 40;
        }
        sum += score[i];
    }
    cout << (sum / 5);
    return 0;
}