#include <iostream>
using namespace std;

void swop(int x, int y);

int main() {
  int a, b;
  a = 3;
  b = 5;
  cout << "a is " << a << " and b is " << b << endl;
  swop(a, b);
  cout << "a is " << a << " and b is " << b << endl;
}

void swop(int x, int y) {
  // swop the contents of x and y
  int temp;
  temp = x;
  x = y;
  y = temp;
}

/* Important points about this program:
    • It DOES NOT work! This is because C++ uses "call by value" to pass parameters,
      which means it only passes values, not the actual variables.
    • You can change the value of the parameters during the function (they act as local variables in the function)
      but the corresponding variables back in main are not affected.
    • The reason for "call by value" is that it allows calculations to be passed as parameters.
    • We could of course make the function of int type and use return, but it only returns 1 value.
      Two ways to solve this:
        (1) Use two functions
        (2) Use pointers c:
*/
