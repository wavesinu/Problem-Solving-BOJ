#include <iostream>
using namespace std;

int main(){
    int N, T;
    int count = 0;
    cin >> N;

    T = N;

    do
    {
        //N에 대하여 반복하므로 연산된 값도 N으로 설정
        N = (N % 10) * 10 + ((N / 10) + (N % 10))%10;
        count++;
    } while (T != N);

    cout << count;
}

/*
(N/10)+(N%10) = N의 10의 자릿수와 1의 자릿수를 더함
= 더한 값의 1의 자릿수가 T의 1의 자릿수가 됨
*/
