#include <iostream>
using namespace std;

int main(){
  int num = 0;
  double max, sum = 0;
  
  cin >> num;
  
  double score[num];
  
  for(int i = 0; i<num; i++){
    cin >> score[i];
    if(max<score[i]){
      max = score[i];
    }
  }
  for(int i = 0; i<num; i++){
    score[i] = score[i]/max*100.0;
    sum += score[i];
  }
  cout<<sum/(double)num;
  return 0;
}