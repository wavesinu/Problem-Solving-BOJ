#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    while (!(cin >> n1 >> n2).eof()){
        cout << n1 + n2 << endl;
    }
  return 0;
}