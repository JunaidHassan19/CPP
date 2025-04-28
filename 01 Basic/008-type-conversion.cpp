#include <iostream>

int main()
{
  // TYPE CONVERSION IN C++
  // Type conversion refers to converting a value of one data type to another data type.
  // There are two types of type conversion:
  //   1. Implicit Conversion (Automatic): Performed automatically by the compiler
  //   2. Explicit Conversion (Manual): Performed manually by the programmer using casting operators

  // IMPLICIT CONVERSION EXAMPLES:
  
  // Example 1: Converting double to int (decimal part gets truncated)
  int x = 3.14;                                           
  std::cout << "Implicit conversion (double to int): " << x << std::endl; // Output: 3
  
  // Example 2: No conversion needed when assigning double to double
  double y = 3.14;
  std::cout << "No conversion needed: " << y << std::endl; // Output: 3.14
  
  // Example 3: Converting int to char (using ASCII value)
  char z = 100;                                           
  std::cout << "Implicit conversion (int to char): " << z << std::endl; // Output: d (ASCII value 100)
  
  // Example 4: Converting bool to int
  bool flag = true;
  int boolToInt = flag;
  std::cout << "Implicit conversion (bool to int): " << boolToInt << std::endl; // Output: 1
  
  // Example 5: Converting smaller to larger integer type
  short smallNum = 127;
  int largeNum = smallNum;
  std::cout << "Implicit conversion (short to int): " << largeNum << std::endl; // Output: 127
  
  // EXPLICIT CONVERSION EXAMPLES:
  
  // Example 1: Converting double to int using C-style cast
  std::cout << "Explicit conversion (double to int): " << (int)3.14 << std::endl; // Output: 3
  
  // Example 2: Converting int to char using C-style cast
  std::cout << "Explicit conversion (int to char): " << (char)100 << std::endl; // Output: d
  
  // Example 3: Using static_cast (modern C++ way)
  double pi = 3.14159;
  int intPi = static_cast<int>(pi);
  std::cout << "Explicit conversion using static_cast: " << intPi << std::endl; // Output: 3
  
  // PRACTICAL EXAMPLE: CALCULATION PROBLEM
  
  int correct = 8;
  int questions = 10;
  // Integer division problem: When dividing two integers, the result is truncated
  double score = correct / questions * 100; // First calculates 8/10 = 0 (integer division), then 0 * 100 = 0

  std::cout << "Integer division problem: " << score << std::endl; // Output: 0
  
  // Solution 1: Use explicit cast to double before division
  score = (double)correct / questions * 100;
  std::cout << "Fixed with explicit cast: " << score << std::endl; // Output: 80
  
  // Solution 2: Alternative using static_cast
  score = static_cast<double>(correct) / questions * 100;
  std::cout << "Fixed with static_cast: " << score << std::endl; // Output: 80

  return 0;
}