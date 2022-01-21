#include <iostream>
#include <cstdio>
using namespace std;

int d(int n){
    int result = n;

    while (1){
        if (n == 0)
            break;
        result += n % 10;
        n = n / 10;
    }
    return result;
}

bool self[10001];

int main(){
    for (int i = 1; i <= 10000; i++){
        int n = d(i);

        while (n < 10001)
        {
            self[n] = true;
        }
    }

    for (int i = 1; i <= 10000; i++){
        if(!self[i])
            printf("%d\n", i);
    }
}