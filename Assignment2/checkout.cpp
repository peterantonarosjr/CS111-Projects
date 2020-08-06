#include <iostream>
using namespace std;

int main(){
  int total;
  int price;
  cout << "Please enter the price of your item: ";
  cin >> price;
  total += price;

  while(price>0){
    cout << "Please enter the price of your next item: ";
    cin >> price;
    total +=price;
  }if(price < 0){
    cout << "Please enter a valid price: ";
    cin >> price;
    total+=price;
  }else if(price == 0){
    cout << "Your total checkout price is " << total << endl;
    if(total>100){
      cout << "That was expensive!" << endl;
    }
  }
  return 0;
}