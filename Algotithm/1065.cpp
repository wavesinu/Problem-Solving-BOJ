#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    if(N<100)
        //N이 100보다 작은 수는 무조건 등차수열을 이룬다.
        cout << N;
    else{
        int cnt = 99;
        int hun, ten, one;
        //100 이상의 수는 각 자리수를 비교
        for (int i = 100; i <= N; i++){
            hun = i / 100;
            ten = i / 10 % 10;
            one = i % 10;

            //세 수가 등차수열을 이루면 한수의 개수 증가
            if((ten-hun)==(one-ten))
                cnt++;
        }
        cout << cnt;
    }
}