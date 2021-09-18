#include <iostream>
using namespace std;

int a;

int main() {
  a = 21;
  cout << "The value in a is " << a << endl;
  cout << "The address of a is " << &a << endl;
  cout << "The value at the address " << &a << " is " << *(&a) << endl << endl;
}

/*
Important points about this program:
  • the “indirection” or “dereference” operator (the star, *) provides the contents
  (the data or the value) at a particular address.
  • &x means “the address of the variable called x”
  • *(&x) means “the value stored at (the address of the variable called x)”
*/
