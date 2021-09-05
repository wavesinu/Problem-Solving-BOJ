#include <iostream>
using namespace std;

int main(){
    int N;                      //무게
    int div_five, div_three;    //3kg, 5kg 무게를 카운트 할 변수

    cin >> N;
    div_five = N / 5;

    while(1){
        if (div_five < 0){  //5로 나눠지지 않을 때 종료
            cout << -1;
            return 0;
        }
        if ((N - div_five * 5) % 3 == 0){
            div_three = (N - div_five * 5) / 3;
            break;
        }
        div_five--;
    }
    cout << div_five + div_three << endl;
    return 0;
}