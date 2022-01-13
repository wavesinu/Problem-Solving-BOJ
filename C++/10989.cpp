#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    /*메모리 초과를 방지하기 위해 C와 C++의 표준 stream의 동기화를 끊는다.*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int input[10001] = {0};

    for (int i = 0; i < N; i++){
        int in;
        cin >> in;
        input[in] += 1;
    }
    for (int i = 1; i < 10001; i++){
        for (int j = 0; j < input[i]; j++){
            cout << i << '\n';
        }
    }
}