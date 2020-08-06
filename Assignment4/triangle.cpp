#include <iostream>
#include <cmath>
using namespace std;

double pyth(double x, double y){
  return sqrt((x*x)+(y*y));
}

int main(){
  double side1;
  double side2;

  cout << "Please enter sidelength 1 of your triangle: ";
  cin >> side1;
  cout << "Please enter sidelength 2 of your triangle: ";
  cin >> side2;

  cout << "The length of the hypotenuse is: " << pyth(side1,side2) << endl;

}  