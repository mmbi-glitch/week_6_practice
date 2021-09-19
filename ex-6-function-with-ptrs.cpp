#include <iostream>
using namespace std;

void swop(int *ptr1, int *ptr2);

int main() {
  int a, b;
  a = 3;
  b = 5;
  cout << "a is " << a << " and b is " << b << endl;
  swop(&a, &b);
  cout << "a is " << a << " and b is " << b << endl;
}

void swop(int *ptr1, int *ptr2) {
  // swop the contents of ptr1 and ptr2
  int temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

/* Important points about this program:
    • the parameters in the function are now pointers
    • when we call the function, we pass the address of a and the address of b
    • the function now works with a and b in main (even though it doesn’t know the names)
*/
