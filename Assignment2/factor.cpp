#include <iostream>
using namespace std;

int main() {
  int user;
  int numFac;

  cout << "Please enter a positive 2 digit integer: ";
  cin >> user;
  while(user<10){
    cout << "Please enter a positive 2 digit integer: ";
    cin >> user;
  }
  for(int f=1; f<=user; f++){
    if(user%f==0){
      cout << f << endl;;
      numFac++;
    }
  }  
  cout << user << " has " << numFac << " factors." << endl;
  return 0;
}