#include <iostream>
using namespace std;

void xShape(int x){
  for(int r=1; r<=x; r++){
    for(int c=1; c<=x; c++){
      if(r==c && r+c==x+1){
        cout << "*";
      }else if(r+c==x+1){
        cout << "x";
      }else if(r==c){
        cout << "+";
      }else{
        cout << " ";
      }
    }
    cout << endl;
  }
}

int main(){
  int user;

  cout << "Please enter the height of your X-shape: ";
  cin >> user;

  xShape(user);

  return 0;
}