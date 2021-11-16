#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int> &a){
    long long ans = 0;

    for (int i = 0; i < a.size(); i++){
        ans += a[i];
        //배열의 원소의 크기를 더해줌
    }
    return ans;
}