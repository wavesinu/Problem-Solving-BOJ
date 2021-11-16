#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    getline(cin, S);

    for (int i = 0; i < S.size(); i++){
        cout << S[i];
        if ((i + 1) % 10 == 0){
            // 글자 수가 10으로 나눠 떨어지면 끊어서 출력
            cout << '\n';
        }
    }
    return 0;
}