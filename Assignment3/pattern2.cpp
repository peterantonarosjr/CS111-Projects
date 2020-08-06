#include <iostream>
using namespace std;

int main(){
   int user;
   cout << "Enter number of rows: ";
   cin >> user;

   for(int r=1; r<=user; r++){
      for(int s=r; s<=user;s++){
         cout << " ";
      }
      for(int c=1; c<=(2*r-1); c++){
         cout << "*";
      }
      cout << endl;
   }
   return 0;
}