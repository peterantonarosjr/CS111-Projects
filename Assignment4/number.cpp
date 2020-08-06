#include <iostream>
#include <cmath>
using namespace std;


void factors(int num){
  for(int i=1; i<=num;i++){
    if(num%i==0){
      cout << i << " ";
    }
  }
}

int max(int x[], int y){
  int maxInt=x[0];
  for(int i=0; i<y; i++){
    if(x[i]>maxInt){
      maxInt = x[i];
    }
  }
  return maxInt;
}

int main(){
  int x[5];
  int maximum;
  cout << "Please enter 5 integers: ";
  for(int i=0; i<5; i++){
    cin >> x[i];
  }

  maximum=max(x,5);
  cout << "Your largest number is: " << maximum << " ,and its factors are: ";
  factors(maximum);
 
  return 0;
}  
  