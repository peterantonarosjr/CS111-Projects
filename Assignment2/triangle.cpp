#include <iostream>
using namespace std;

int main(){
  int user;
  int num;
  cout << "Enter a large positive integer: ";
  cin >> user;
  num = user;

  while(user<=0){
    cout << "Enter a large positive integer: ";
    cin >> user;
    num = user;
  }
  while(num>0){
    cout << num << endl;
    num/=10;
  }
  
 return 0; 
}