#include <iostream>
using namespace std;

int a, b;

int main() {
  a = 3;
  b = 5;
  cout << "The value in a is " << a << endl;
  cout << "The address of a is " << &a << endl;
  cout << "The value in b is " << b << endl;
  cout << "The address of b is " << &b << endl << endl;
}

/*
Important points about this program:
  • the "address of" or "reference to" operator (the ampersand, &) provides the address of a variable.
  • the addresses are displayed in hexadecimal
*/
