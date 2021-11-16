#include <iostream>
using namespace std;

//재귀함수 작성
int factorial(int n){
    if(n<=1)
        return 1;   //0! = 1
    n *= factorial(n - 1);
    return n;
}

int main(){
    int N, result = 1;
    cin >> N;

    if(N!=0)
        result = factorial(N);
    cout << result;
}