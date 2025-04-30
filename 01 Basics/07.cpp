#include <iostream>
using namespace std;

// This program demonstrates the use of various increment and decrement operators in C++
int main()
{
  cout << "===== INCREMENTING EXAMPLES =====" << endl;
  
  // Start with initial value
  int x = 4;
  cout << "Initial value: x = " << x << endl;

  // Method 1: Long form increment
  x = x + 1;
  cout << "After x = x + 1: x = " << x << endl;

  // Method 2: Compound assignment operator
  x += 2;
  cout << "After x += 2: x = " << x << endl;

  // Method 3: Prefix increment operator
  ++x;
  cout << "After ++x: x = " << x << endl;
  
  // Method 4: Postfix increment operator (commented out)
  // x++;
  // cout << "After x++: x = " << x << endl;

  cout << "\n===== DECREMENTING EXAMPLES =====" << endl;
  
  // Reset value for decrement examples
  x = 4;
  cout << "Initial value: x = " << x << endl;

  // Method 1: Long form decrement
  x = x - 1;
  cout << "After x = x - 1: x = " << x << endl;

  // Method 2: Compound assignment operator
  x -= 2;
  cout << "After x -= 2: x = " << x << endl;

  // Method 3: Prefix decrement operator
  --x;
  cout << "After --x: x = " << x << endl;
  
  // Method 4: Postfix decrement operator (commented out)
  // x--;
  // cout << "After x--: x = " << x << endl;

  return 0;
}