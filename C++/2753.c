#include <stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    if(year%4==0 && year%100 != 0){
        printf("1");
    }
    else if (year % 400 == 0){
        printf("1");
    }
    else
        printf("0");

    return 0;
}

/*
#include <iostream>

using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%4==0 && year%100 != 0){
        cout<<"1";
    }
    else if (year % 400 == 0){
        cout<<"1";
    }
    else
        cout<<"0";    
    return 0;
}
*/