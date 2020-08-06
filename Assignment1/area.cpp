#include <iostream>
using namespace std;

int main () {
  int base;
  int tri_height;
  int user_height;
  int whole;
  int remainder;

  cout << "Please enter the base of your triangle: ";
  cin >> base;

  cout << "Please enter the height of your triangle: ";
  cin >> tri_height;

  cout << "Please enter your height in inches: ";
  cin >> user_height;

  cout << "The base of your triangle is " << base << endl;
  cout << "The height of your triangle is " << tri_height << endl;
  cout << "The area of your triangle is " << (base*tri_height)*0.5 << endl;

  cout << "You are " << user_height << " inches tall" << endl;

  whole = user_height / 12;
  remainder = user_height%12;

  cout << "That is also " << whole << " feet tall and " << remainder << " inches" << endl;

 return 0;
}