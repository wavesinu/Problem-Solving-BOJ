#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> total;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;
        total.push_back(x);
    }
    sort(total.begin(), total.end());

    for (int i = 0; i < n; i++){
        cout << total[i] << '\n';
    }
    return 0;
}