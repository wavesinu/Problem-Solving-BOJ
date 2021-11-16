#include <iostream>
#include <array>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;

    //2차원 배열 생성
    int **array;
    array = new int *[row];
    for (int i = 0; i < row; i++){
        array[i] = new int[col];
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
            cin >> array[i][j];
    }
    int T;
    cin >> T;

    //동적 메모리 할당 
    for(int i = 0; i < row; i++){
        delete[] array[i];
    }
    delete[] array;
}