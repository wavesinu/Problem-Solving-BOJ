#include <iostream>
using namespace std;

int main(){
    int money;
    cin >> money;
    money = 1000 - money;

    int count = 0;
    while(1){
        if(money>=500){
            money -= 500;
            count++;
            continue;
        }
        if(money>=100){
            money -= 100;
            count++;
            continue;
        }
        if(money>=50){
            money -= 50;
            count++;
            continue;
        }
        if(money>=10){
            money -= 10;
            count++;
            continue;
        }
        if(money>=5){
            money -= 5;
            count++;
            continue;
        }
        if(money>=1){
            money -= 1;
            count++;
            continue;
        }
        if(money==0)
            break;
    }
    cout << count << endl;
    return 0;
}