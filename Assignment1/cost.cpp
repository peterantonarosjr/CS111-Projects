#include <iostream>
using namespace std;

int main () {
 int productA;
 int productB;
 int total;

 cout << "Enter the price of your first product: ";
 cin >> productA;

 cout << "Enter the price of your second product: ";
 cin >> productB;

 cout << "Subtotal: " << productA + productB << endl;
 total = (productA + productB);

 cout << "Total: " << total * 1.08875 << endl;

 return 0;
}