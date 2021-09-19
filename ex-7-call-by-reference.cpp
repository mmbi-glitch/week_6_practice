#include <iostream>
using namespace std;

void swop(int &x, int &y);

int main() {
  int a, b;
  a = 3;
  b = 5;
  cout << "a is " << a << " and b is " << b << endl;
  swop(a, b);
  cout << "a is " << a << " and b is " << b << endl;
}

void swop(int &x, int &y) {
  // swop the contents of x and y
  // (they hold the addresses of a and b, so data can be changed and is reflected in main)
  int temp;
  temp = x;
  x = y;
  y = temp;
}

/* Important points about this program:
    • C++ provides us with an alternate system for parameter passing called "call by reference",
      which provides syntax to enable programmers to reference variables without explicitly using pointers.
    • it looks very similar to the first swopping program we wrote (except that it works now)
    • note the use of ampersands to indicate “call by reference” (i.e. parameters can be changed)
    • there appear to not be any pointers in the program (which is nice)
 */
