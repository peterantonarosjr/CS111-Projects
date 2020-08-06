#include <iostream>
using namespace std;

int biggerDigits(int x, int y){
  if(x==0||y==0) return 0;
  if(x%10>y%10) return 10*biggerDigits(x/10,y/10)+x%10;
  else return 10*biggerDigits(x/10,y/10)+y%10;
}

int main() {
  
  cout << biggerDigits(567, 765) << endl; // prints 767 
  cout << biggerDigits(123456, 444444) << endl; // prints 444456 
  cout << biggerDigits(999, 111) << endl; // prints 999
  return 0;
}