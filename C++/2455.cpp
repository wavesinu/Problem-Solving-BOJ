#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
    array<int, 4> count;
    int total = 0;
    int getOn, getOff;  //타는 사람, 내리는 사람

    for (int i = 0; i < 4; i++){
        cin >> getOff >> getOn;
        total = total + getOn - getOff; //기차에 타고 있는 사람의 수를 계산하여
        count[i] = total;               //배열에 저장
    }
    sort(count.begin(), count.end());   //배열의 원소를 내림차순으로 정렬

    cout << count[3] << endl;
}