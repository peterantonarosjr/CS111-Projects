#include <iostream>
using namespace std;

int main(){
  int user;
  int last;

  cout << "Please enter an integer between 100 and 9999: ";
  cin >> user;

  while(user<100 || user>9999){
    cout << "Please enter an integer between 100 and 9999: ";
    cin >> user;
  }

  while(user!=0){
    last = user%10;
    cout << last << endl;
    user/=10;
  }

  return 0;
}