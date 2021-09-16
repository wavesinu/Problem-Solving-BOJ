#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s1, s2;
    string result;

    cin >> s1 >> s2;

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    result = s1 > s2 ? s1 : s2;
    cout << result;

    return 0;
}