#include <iostream>
using namespace std;

void triangle(int x){
  for(int r=1; r<=x; r++){
     for(int c=1; c<=r;c++){
       if(c<=x/2&&r>=x/2+1){
         cout << " ";
       }else{
         cout << "*";
       }
     }
     cout << endl;    
  }
}
int main(){  
  int user;
  cout << "Enter triangle height: ";
  cin >> user;
  user=user*2;
  
  triangle(user);
  return 0;
}