#include <iostream>
using namespace std;

int cutAfter7(int x) {
  if (x<=0) return x;
  int var=cutAfter7(x/10);
  if ((var%10)==7) return var;
  return x;
}
int main(){
  cout << cutAfter7(765) << endl; // prints 7 
  cout << cutAfter7(765765) << endl; // prints 7 
  cout << cutAfter7(666) << endl; // prints 666 
  cout << cutAfter7(107) << endl; // prints 107 
  cout << cutAfter7(107007) << endl; // prints 107
  return 0;
}