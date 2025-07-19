#include <iostream>
#include <cmath>     // Required for mathematical functions like sqrt, pow, etc.
#include <algorithm> // Required for min/max functions
using namespace std;

/*
  This file demonstrates built-in mathematical functions in C++
  These are pre-written functions that come with the C++ standard library

  Key Libraries:
  - <cmath>: Contains mathematical functions (sqrt, pow, sin, cos, etc.)
  - <algorithm>: Contains utility functions (min, max, etc.)

  Benefits of using built-in functions:
  1. No need to write complex mathematical code yourself
  2. Optimized and tested implementations
  3. Easy to use and understand
*/

int main()
{
  cout << "=== BUILT-IN MATHEMATICAL FUNCTIONS DEMO ===" << endl
       << endl;

  // 1. SQUARE ROOT FUNCTION
  cout << "1. Square Root Examples:" << endl;
  cout << "sqrt(36) = " << sqrt(36) << endl; // Returns 6.0
  cout << "sqrt(25) = " << sqrt(25) << endl; // Returns 5.0
  cout << "sqrt(2) = " << sqrt(2) << endl;   // Returns 1.414...
  cout << endl;

  // 2. MIN/MAX FUNCTIONS
  cout << "2. Minimum and Maximum Examples:" << endl;
  cout << "max(5, 8) = " << max(5, 8) << endl;       // Returns 8 (larger value)
  cout << "min(5, 8) = " << min(5, 8) << endl;       // Returns 5 (smaller value)
  cout << "max(100, 50) = " << max(100, 50) << endl; // Returns 100
  cout << endl;

  // 3. POWER FUNCTION
  cout << "3. Power Function Examples:" << endl;
  cout << "pow(5, 6) = " << pow(5, 6) << endl;   // 5^6 = 15625
  cout << "pow(2, 3) = " << pow(2, 3) << endl;   // 2^3 = 8
  cout << "pow(10, 2) = " << pow(10, 2) << endl; // 10^2 = 100
  cout << endl;

  return 0;
}

/*
  SUMMARY OF BUILT-IN MATHEMATICAL FUNCTIONS:

  1. SQUARE ROOT:
     - sqrt(number): Returns square root of the number
     - Example: sqrt(25) = 5

  2. MIN/MAX:
     - max(a, b): Returns the larger value
     - min(a, b): Returns the smaller value
     - Can be nested: max(a, max(b, c)) for three numbers

  3. POWER:
     - pow(base, exponent): Calculates base^exponent
     - Example: pow(2, 3) = 2³ = 8

  ADVANTAGES OF USING BUILT-IN FUNCTIONS:
  ✓ No need to implement complex math yourself
  ✓ Optimized and efficient
  ✓ Well-tested and reliable
  ✓ Easy to read and understand
  ✓ Saves development time

  REMEMBER:
  - Always include appropriate headers (<cmath>, <algorithm>)
  - These functions return values, so you can store them in variables
  - Some functions work with different data types (int, float, double)
*/