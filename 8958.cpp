#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char input[80];
    int time;
    int score = 0;
    int sum = 0;

    cin >> time;
    for (int i = 0; i < time; i++){
        cin >> input;
        for (int j = 0; j < strlen(input); j++){
            if(input[j]=='O'){
                score++;    //점수 증가
                sum += score;
            }
            if(input[j]=='X'){
                score = 0;  //점수 초기화
            }
        }
        cout << sum << endl;
        sum = 0;
        score = 0;
    }
    return 0;
}