#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> vec;
  int x;
  
  for(int i = 0; i<9; i++){
    cin>>x;
    vec.push_back(x);
  }
  cout<<*max_element(vec.begin(), vec.end())<<endl<<max_element(vec.begin(), vec.end())-vec.begin()+1;  
  return 0;
}