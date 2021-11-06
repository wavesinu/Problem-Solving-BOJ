#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> T(8);       //입력을 저장할 배열
    vector<int> ascd(8);    //오름차순으로 저장할 배열
    vector<int> dscd(8);    //내림차순으로 저장할 배열

    for (int i = 0; i < T.size(); i++){
        cin >> T[i];
        ascd[i] = T[i];
        dscd[i] = T[i];
    }
    sort(ascd.begin(), ascd.end());                 //오름차순으로 정렬
    sort(dscd.begin(), dscd.end(), greater<int>()); //내림차순으로 정렬

    if(T==ascd)
        cout << "ascending" << endl;
    else if(T==dscd)
        cout << "descending" << endl;
    else if(T!=ascd || T!=dscd)
        cout << "mixed" << endl;

    return 0;
}
