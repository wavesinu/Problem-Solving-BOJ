#include <iostream>
#include <string>
using namespace std;

int main(){
    int R, N;
    //R : 테스트 케이스 횟수, N : 문자열 반복횟수
    string S;

    cin >> R;

    for (int i = 0; i < R; i++){
        //각 테스트 케이스 문자열, 반복횟수 입력
        cin >> N >> S;
        for (int j = 0; j < S.size(); j++){
            //문자열의 크기만큼 반복
            for (int k = 0; k < N; k++)
                //해당 문자를 N만큼 반복
                cout << S[j];
        }
        cout << endl;
    }
    return 0;
}