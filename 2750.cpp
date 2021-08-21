#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x, T;
    vector<unsigned int> num;

    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> x;
        num.push_back(x);
    }

    sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++){
        cout << num[i] << endl;
    }
    return 0;
}