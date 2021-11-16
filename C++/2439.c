#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        for (int j = num - 1; j > i; j--){  //별 앞에 빈칸을 채워넣기 위한 for 문을 작성
            printf(" ");
        }
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
