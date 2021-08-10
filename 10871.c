//수열을 입력받으면서 그때그때 값을 비교해서 출력하는 방식으로 풀이

#include <stdio.h>

int main(){
    int n, x;
    scanf("%d %d", &n, &x);

    int value;
    for (int i = 0; i < n; i++){
        scanf("%d", &value);
        if(value<x)
            printf("%d ", value);
    }
    return 0;
}