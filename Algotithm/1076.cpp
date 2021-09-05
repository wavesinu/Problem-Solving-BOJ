#include <iostream>
#include <map>
using namespace std;

typedef pair<int, long long> pll;
map<string, pll> field;

int main(){
    string res1, res2, res3;

    field["black"] = {0, 1}; field["brown"] = {1, 10};
    field["red"] = {2, 100}; field["orange"] = {3, 1000};
    field["yellow"] = {4, 10000}; field["green"] = {5, 100000};
    field["blue"] = {6, 1000000}; field["violet"] = {7, 10000000};
    field["grey"] = {8, 100000000}; field["white"] = {9, 1000000000};

    cin>>res1>>res2>>res3;
    cout<<(field[res1].first*10 + field[res2].first)*field[res3].second;
    return 0;
}