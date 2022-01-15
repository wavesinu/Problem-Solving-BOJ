#include <iostream>
using namespace std;

int getGCD(int a, int b){
    if (b == 0)
        return a;
    else
        return getGCD(b, a % b);
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << getGCD(a, b) << endl;
    cout << a * b / getGCD(a, b) << endl;
}