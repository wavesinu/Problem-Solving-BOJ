/*구구단*/
#include <stdio.h>

int main(){
    int num;
    int i;
    scanf("%d", &num);

    for (i = 1; i<10; i++){
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}