#include <iostream>
using namespace std;

int main() {
  int user;
  int current;
  int big;
  big=0;

  cout << "Please enter a positive 2 digit integer: ";
  cin >> user;
  while(user<10){
    cout << "Please enter a positive 2 digit integer: ";
    cin >> user;
  }

  while(user>0){
    current=user%10;
    user=user/10;
    big=std::max(big,current);

  }
  cout << big << endl;
  return 0;
}