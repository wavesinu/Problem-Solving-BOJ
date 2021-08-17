#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> num;
  int x, T;
  
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> x;
    num.push_back(x);
  }
  sort(num.begin(), num.end());
  
  cout << num[0] << " " << num[T-1] << endl;
  return 0;
  
}