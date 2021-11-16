#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T; i++){
        int score[1000];
        int x;
        int sum = 0, count = 0;

        cin >> x;   

        for (int j = 0; j < x; j++){
            cin >> score[j];
            sum += score[j];
        }
        //성적 평균
        double avg = (sum / (double)x);
        for (int j = 0; j < x; j++){
            if(score[j]>avg){
                count++;
            }
        }
        cout << fixed;
        cout.precision(3);  //소수점 3자리까지 출력
        cout << (count * 100 / (double)x) << "%\n";
    }
}