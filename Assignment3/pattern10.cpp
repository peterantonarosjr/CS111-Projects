#include <iostream>
using namespace std;

int main(){
   int user;
   cout << "Enter triangle height: ";
   cin >> user;
   user=user*2;

   for(int r=1; r<=user; r++){
     for(int c=1; c<=r;c++){
       if(c<=user/2&&r>=user/2+1){
         cout << " ";
       }else{
         cout << "*";
       }
     }
     cout << endl;    
   }
   
   return 0;
}