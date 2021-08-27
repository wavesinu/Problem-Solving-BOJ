#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> ct;
    int a, b, c;

    cin >> a >> b >> c;
    ct.push_back(a);
    ct.push_back(b);
    ct.push_back(c);
    
    sort(ct.begin(), ct.end());
    cout << ct[1];
    return 0;
}