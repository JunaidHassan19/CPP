#include <iostream>
#include <cmath>
using namespace std;

// Q: Swap 2 numbers

// Method 1: Using temporary variable
int main()
{
  int x = 5;
  int y = 10;
  cout << "x = " << x << " y = " << y << endl;

  int tamp = x;
  x = y;
  y = tamp;
  cout << "x = " << x << " y = " << y << endl;
}

// Method 2: Using arithmetic operations
int main()
{
  int x = 5;
  int y = 10;
  cout << "x = " << x << " y = " << y << endl;

  x = x + y;
  y = x - y;
  x = x - y;
  cout << "x = " << x << " y = " << y << endl;
}