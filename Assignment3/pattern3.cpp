#include <iostream>
using namespace std;

int main(){
  int user;
  int change;
  change=1;
  cout << "Please enter height: ";
  cin >> user;

  for(int r=1; r<=user; r+=change){
    for(int c=1; c<=r; c++){
      cout << "*";
    }
    if(user/2+1==r){
        change=-1;
    }
    if(r==0){
    return 0;  
    }
    cout << endl;
  }
  
}