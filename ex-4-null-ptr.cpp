#include <iostream>
using namespace std;

int *ptr;

int main() {
  ptr = NULL;
  cout << "The value of the pointer is " << ptr << endl;
  cout << "The data at the address " << ptr << " is " << *ptr << endl << endl;
}

/*
Important points about this program:
  • note that there is no ordinary variable in the program
  • we load the value NULL into the pointer
  • this is a BAD program – do not display the data of the NULL pointer, it doesnt even work
  • programming style - all the following are valid:
      (1) int* ptr
      (2) int * ptr
      (3) int *ptr < this is the best, tho
*/
