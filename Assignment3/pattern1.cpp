#include <iostream>
using namespace std;

int main() {
  int user;
  
  cout << "Please enter the height of your triangle: ";
  cin >> user;

  for(int r=1; r<=user; r++){
    for(int c=1; c<=r; c++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}