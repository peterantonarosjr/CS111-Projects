#include <iostream>
using namespace std;

int main(){
   int user;
   cout << "Enter number a width: ";
   cin >> user;
   user=user*2-1;

   for(int r=1; r<=user; r++){
     for(int c=1;c<=user/2+1;c++){
       if(c==r||r+c==user+1){
         cout << " ";
       }else{
         cout << "*";
       }
     }
     cout << endl;
   }
   return 0;
}