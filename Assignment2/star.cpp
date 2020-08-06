#include <iostream>
using namespace std;

int main() {
  int user;
  int x;  
  
  cout << "Please enter a number divisible by 10: ";
  cin >> user;
  while(user%10!=0){
    cout << "Please enter a number divisible by 10: ";
    cin >> user;
  }
  x=user/10;
  for(int r=1; r<=x; r++){
    for(int c=1; c<=10; c++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}