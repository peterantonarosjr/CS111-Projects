#include <iostream>
#include <cmath>
using namespace std;

void primeFac(int x){
  cout << "2 3 ";
  for(int i=2;i<x;i++){
    for(int j=2;j*j<=i;j++){
      if(i%j==0){
        break;
      }else if(j+1>sqrt(i)){
        cout << i << " ";
      }
    }
  }
}

int main(){
  int user;

  cout << "Please enter an integer in the range of 2-1000: ";
  cin >> user;
  if(user<2||user>1000){
    cout << "Sorry you have already failed :(" << endl;
    return 0;
  }

  primeFac(user);
  
  return 0;
}  
  