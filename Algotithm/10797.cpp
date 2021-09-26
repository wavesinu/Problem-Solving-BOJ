#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[5];

    int cnt = 0;
    cin >> n;
    for (int i = 0; i < 5; i++){
        cin >> arr[i];

        if (arr[i] == n)
            cnt++;
    }
    cout << cnt;
    return 0;
}