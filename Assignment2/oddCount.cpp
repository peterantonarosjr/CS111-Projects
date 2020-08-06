#include <iostream>
using namespace std;

int main(){
  int user;
  int tries;
  tries=3;
  int current;
  int oddNum;
  oddNum=0;

  cout << "Enter an integer from 1000 to 1000000: ";
  cin >> user;

  if(user<1000||user>1000000){
    while(tries>1){
      cout << "Enter an integer from 1000 to 1000000: ";
      cin >> user;
      tries-=1;
      if(tries==0){
        return 0;
      }
    }
  }

  while(user>0){
    current=user%10;
    if(current%2==1){
      oddNum++;
    }
    user=user/10;
  }
  cout << oddNum << " odd numbers." << endl; 
  
  return 0;
}