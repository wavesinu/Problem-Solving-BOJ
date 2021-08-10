/*else if가 여러 개 반복되는 경우, 
순서대로 위쪽 if 문 조건을 만족하지 않는 경우에만 다음 조건을 확인합니다.
따라서 else if 문의 조건부에는 [윗 조건의 값보다 작다] 를 포함시키지 않아도 됩니다.*/
#include <stdio.h>

int main(){
    int score;
    scanf("%d", &score);
    if(score>=90)
        printf("A");
    else if(score>=80)
        printf("B");
    else if(score>=70)
        printf("C");
    else if(score>=60)
        printf("D");
    else
        printf("F");

    return 0;
}