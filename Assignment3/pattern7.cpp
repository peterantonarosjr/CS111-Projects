#include <iostream>
using namespace std;

int main() {
  int user;
  
  cout << "Please enter the height of your X-shape: ";
  cin >> user;

  for(int r=1; r<=user; r++){
    for(int c=1; c<=user; c++){
      if(r==c){
        cout << "*";
      }else if(r+c==user+1){
        cout << "*";
      }else{
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}