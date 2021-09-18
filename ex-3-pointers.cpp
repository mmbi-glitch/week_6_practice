#include <iostream>
using namespace std;

int a;
int *ptr;

int main() {
  a = 17;
  ptr = &a;
  cout << "The value in a is " << a << endl;
  cout << "The address of a is " << ptr << endl;
  cout << "The data at the address " << ptr << " is " << *ptr << endl << endl;

}

/*
Important points about this program:
  • A pointer is a variable that holds a memory address as its value.
  • The pointer variable must match the data type of the variable of whose address points to.
  • Dereference the pointer to get the value of the address it points to.
  • When we load a value into a pointer variable, that value must be the address of a memory location.
  • DO NOT load ordinary integer values into a pointer.
*/
