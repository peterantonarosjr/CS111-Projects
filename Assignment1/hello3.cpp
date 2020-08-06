#include <iostream>
using namespace std;

int main () {
  string name;
  int year_user;
  int cur_year = 2018;
  int height;
  
  cout << "Please enter your first and last name: ";
  cin >> name;

  cout << "Please enter your birth year: ";
  cin >> year_user;

  cout << "Please enter your height in inches: ";
  cin >> height;

  cout << "Hello, " << name << endl;
  cout << "You are " << cur_year - year_user << " years old." << endl;
  cout << "You are about " << height * 2.54 << " centimeters tall." << endl;

  return 0;
}