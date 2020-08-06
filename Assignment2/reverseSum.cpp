#include <iostream>
using namespace std;

int main(){
  int user;
  int current;
  int sum;

  cout << "Please enter a positive integer: ";
  cin >> user;

  if(user<=0){
    return 0;
  }

  while(user>=1){
    current=user%10;
    user=user/10;
    cout << current << " ";
    sum+=current;
  }
  cout << "sum to " << sum << endl;


  return 0;
}