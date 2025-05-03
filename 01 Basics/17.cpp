#include <iostream>
using namespace std;

int main()
{
  // Hierarchy of operations (operator precedence)
  int x = 2 * 3 + 4 - 5 / 2;
  cout << "Example 1: 2 * 3 + 4 - 5 / 2 = " << x << endl;

  // Breaking down the calculation step by step
  cout << "Step by step:" << endl;
  cout << "  2 * 3 = " << (2 * 3) << endl;
  cout << "  5 / 2 = " << (5 / 2) << " (integer division)" << endl;
  cout << "  2*3 + 4 - 5/2 = 6 + 4 - 2 = " << (6 + 4 - 2) << endl;

  // Examples with parentheses changing the order
  int y = 2 * (3 + 4) - 5 / 2;
  cout << "\nExample 2: 2 * (3 + 4) - 5 / 2 = " << y << endl;

  int z = (2 * 3 + 4 - 5) / 2;
  cout << "Example 3: (2 * 3 + 4 - 5) / 2 = " << z << endl;

  // More complex example
  int a = 10 + 2 * 6 / 3 - 1;
  cout << "\nExample 4: 10 + 2 * 6 / 3 - 1 = " << a << endl;
  cout << "  (Calculated as: 10 + ((2 * 6) / 3) - 1 = 10 + 4 - 1 = 13)" << endl;

  // Example with mixed operations
  double b = 5.0 / 2 + 3 * 2 - 1;
  cout << "\nExample 5 (with double): 5.0 / 2 + 3 * 2 - 1 = " << b << endl;
  cout << "  (Shows floating point division compared to int division)" << endl;

  return 0;
}