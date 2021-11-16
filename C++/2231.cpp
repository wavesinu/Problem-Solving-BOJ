#include <iostream>
using namespace std;

// int sum = num + (num / 100) + (num % 100) / 10 + (num % 100) % 10;

template <typename T>
T apart(T x){
    int sum = x;

    while(x){
        sum += x%10;
        x /= 10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int sum = apart(i);

        if(n==sum){
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}