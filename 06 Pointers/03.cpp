#include <iostream>
using namespace std;

int main()
{
  // Declare an integer variable and initialize it to 15
  int x = 15;

  // Declare a pointer to an integer
  int *p;

  // Assign the address of x to the pointer p
  p = &x;

  // Print the value of x directly
  cout << x << endl;

  // Print the value of x through the pointer (dereferencing)
  cout << *p << endl;

  // Modify the value of x through the pointer
  *p = 20;

  // Print the new value of x to show it was changed
  cout << x << endl;
}
