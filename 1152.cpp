#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int cnt = 1;

    getline(cin, str);  //표준입력방식으로 문자열 끝까지 저장
    for (int i = 0; i < str.length(); i++){
        if(str[i]==' '){
            cnt++;
        }
    }
    if (str[0] == ' ' || str[0] == '\0'){
        cnt--;
    }
    if (str[str.length() - 1] == ' '){ //문자열의 끝이 공백일 경우
        cnt--;
    }
    cout<<cnt;
    return 0;
}