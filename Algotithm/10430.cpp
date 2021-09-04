/*
#include <iostream>

using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) % c << endl;
    cout << (a % c + b % c) << endl;
    cout << (a * b) % c << endl;
    cout << (a % c * b % c) % c << endl;
    return 0;
}
*/

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a + b) % c);
    printf("%d\n", (a % c + b % c) % c);
    printf("%d\n", (a * b) % c);
    printf("%d\n", (a % c * b % c) % c);
    return 0;
}
