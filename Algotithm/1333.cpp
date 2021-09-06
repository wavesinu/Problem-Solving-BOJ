#include <iostream>
#include <vector>   //노래가 재생되는 과정을 벡터로 표현
using namespace std;

int main(){
    vector<int> music;  //노래가 재생되는 과정을 벡터로 표현
    int N, L, D;        //N : 곡 수, L : 노래 길이, D : 벨소리 간격
    int bell = 0;

    cin >> N >> L >> D;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < L; j++){
            music.push_back(1); //노래가 재생되는 동안 1을 벡터에 삽입
        }
        for (int j = 0; j < 5; j++){
            music.push_back(0); //노래가 재생되지 않는 동안은 0을 벡터에 삽입
        }
    }

    while (1){
        if (bell>music.size()){
            break;
        }
        if(music[bell]==0){
            break;
        }
        else {
            bell = bell + D;
            break;
        }
    }
    cout << bell;
}