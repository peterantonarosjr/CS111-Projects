#include <iostream>
#include <cmath>
using namespace std;

int diff2(int x){
  int var;
  if(x==0) return 0;
  if(x<100){
    var=x%10;
  }
  return abs(diff2(x/10) - var);
}
int main(){
  cout << diff2(7070) << endl; // prints 7 
  cout << diff2(7907) << endl; // prints 2 
  cout << diff2(7) << endl; // prints 7
  cout << diff2(72) << endl; // prints 5

  return 0;
}