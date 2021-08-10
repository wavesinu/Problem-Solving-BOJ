#include <iostream>

using namespace std;
int main(){
    int num, sum = 0;
    char ch;
    cin >> num;

    int total = 0;
    while(num--){           //num = 0이 될 경우 반복문 종료
        cin >> ch;
        total += ch - 48;   //char형으로 만들었으므로 0의 아스키 코드값을 뺴줘야 함.
    }
    cout << total << endl;
    return 0;
}

/*
int main() {
    int n;
    scanf("%d ", &n);
 
    int sum = 0;
    while (n--) {
        char ch;
        scanf("%c", &ch);
        sum += ch - '0';
    }
    printf("%d\n", sum);
 
    return 0;
}
*/