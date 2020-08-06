#include <iostream>
using namespace std;

int main(){
   int user;
   cout << "Enter triangle height: ";
   cin >> user;
   
   for(int r=1; r<=user;r++){
     for(int t=1; t<=3; t++){
       for(int c=1;c<=user; c++){
         if(c<=r){
           cout << "*";
         }else{
           cout << " ";
         }
       }
     }
     cout << endl;
   }
   return 0;
}