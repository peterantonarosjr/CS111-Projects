#include <iostream>
using namespace std;


void removeLast0(int x){
  if(x == 0) return;
  if(x%10 == 0){
    cout << x/10;
    return;
  }
  removeLast0(x/10);
  cout << x%10;

}

int main(){

  removeLast0(7070);
  cout << endl;
  removeLast0(7007);
  cout << endl;
  removeLast0(777);
  cout << endl;

  return 0;
}