#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> num;
    int x;

    for (int i = 0; i < 3; i++){
        cin >> x;
        num.push_back(x);
    }
    sort(num.begin(), num.end());
    
    for (int i = 0; i < num.size(); i++){
        cout << num[i] << " ";
    }
}