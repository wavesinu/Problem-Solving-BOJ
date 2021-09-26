#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, count = 0;
    string s;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> s;
        bool flag = true;

        for (int j = 0; j < s.size(); j++){
            for (int k = 0; k < j; k++){
                if (s[j] != s[j - 1] && s[j] == s[k]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
            count++;
    }
    cout << count;
    return 0;
}