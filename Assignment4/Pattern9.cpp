#include <iostream>
using namespace std;

void Shape(int x, int y){
  for(int r=1; r<=x; r++){
    for(int c=1; c<=y; c++){
      if(r%2==0&&c%2==0){
        cout << "0";
      }else{
        cout << "*";
      }
    }
    cout << endl;
  }
}
int main(){
  int height;
  int width;
  cout << "Please enter a height: ";
  cin >> height;
  cout << "Please enter a width: ";
  cin >> width;

  Shape(height,width);

  return 0;
}