/*
1. 입력된 문자열의 각 자리에 알파벳과 비교를 위한 전체 알파벳 배열 선언이 필요
2. 반복문을 실행하면서 동일한 알파벳이 발견됐을 때, break문을 이용한 탈출
3. 발견이 안 될 시에는 반복문이 종료된 후에 조건을 만들어서 -1과 공백을 출력
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string alph = "abcdefghijklmnopqrstuvwxyz";
    string str;

    cin >> str;
    for(int i = 0; i < alph.length(); i++){
        cout << (int)str.find(alph[i]) << " ";
    }
    return 0;
}