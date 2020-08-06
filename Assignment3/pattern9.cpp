#include <iostream>
using namespace std;

int main(){
  int height;
  int width;
  cout << "Please enter a height: ";
  cin >> height;
  cout << "Please enter a width: ";
  cin >> width;

  for(int r=1; r<=height; r++){
    for(int c=1; c<=width; c++){
      if(r%2==0&&c%2==0){
        cout << "0";
      }else{
        cout << "*";
      }
    }
    cout << endl;
  }
  return 0;
}