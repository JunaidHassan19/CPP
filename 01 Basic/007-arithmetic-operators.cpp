#include <iostream>

int main()
{
  // Arithmetic Operators = return the result of specific mathematical operations
  // +, -, *, /, % (modulus), ++ (increment), -- (decrement)

  /*
    int a = 10, b = 5;
    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;
    std::cout << "Multiplication: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Modulus: " << (a % b) << std::endl;
    std::cout << "Increment: " << (++a) << std::endl;
    std::cout << "Decrement: " << (--b) << std::endl;
  */
  
  std::cout << "=== Example 1: Basic Arithmetic Operations ===" << std::endl;
  // Example of arithmetic operators in C++
  // Addition
  int students = 20;
  // students = students + 1; // Incrementing the number of students
  // students += 1; // Incrementing the number of students using shorthand operator
  students++; // Incrementing the number of students using postfix increment operator

  std::cout << "After increment: " << students << std::endl; // Output the number of students

  // Subtraction
  // students = students - 1; // Decrementing the number of students
  // students -= 1; // Decrementing the number of students using shorthand operator
  students--; // Decrementing the number of students using postfix decrement operator

  std::cout << "After decrement: " << students << std::endl; // Output the number of students

  // Multiplication
  // students = students * 2; // Doubling the number of students
  students *= 2; // Doubling the number of students using shorthand operator

  std::cout << "After multiplication by 2: " << students << std::endl; // Output the number of students

  // Division
  // students = students / 2; // Halving the number of students
  students /= 2; // Halving the number of students using shorthand operator

  std::cout << "After division by 2: " << students << std::endl; // Output the number of students

  // Modulus - returns the remainder of division
  int remainder = students % 3; // Finding the remainder when students is divided by 3

  std::cout << "Remainder when divided by 3: " << remainder << std::endl;
  
  
  std::cout << "\n=== Example 2: Operator Precedence ===" << std::endl;
  // Operator precedence in C++:
  // 1. Parentheses
  // 2. Multiplication and division (from left to right)
  // 3. Addition and subtraction (from left to right)

  int result = 6 - 5 + 4 * 3 / 2;   // Arithmetic expression
  std::cout << "Result of 6 - 5 + 4 * 3 / 2: " << result << std::endl;
  std::cout << "Calculation steps:" << std::endl;
  std::cout << "1. 4 * 3 = 12 (multiplication has higher precedence)" << std::endl;
  std::cout << "2. 12 / 2 = 6 (division from left to right)" << std::endl;
  std::cout << "3. 6 - 5 = 1 (subtraction from left to right)" << std::endl;
  std::cout << "4. 1 + 6 = 7 (addition from left to right)" << std::endl;
  
  
  std::cout << "\n=== Example 3: Prefix vs Postfix Increment/Decrement ===" << std::endl;
  // Difference between prefix and postfix increment/decrement
  int a = 5;
  int b = 5;
  
  // Prefix increment: increment first, then use the value
  int prefixResult = ++a;
  std::cout << "Prefix ++a: a = " << a << ", prefixResult = " << prefixResult << std::endl;
  
  // Postfix increment: use the value first, then increment
  int postfixResult = b++;
  std::cout << "Postfix b++: b = " << b << ", postfixResult = " << postfixResult << std::endl;
  
  
  std::cout << "\n=== Example 4: Integer Division and Type Casting ===" << std::endl;
  // Integer division truncates decimal part
  int x = 10;
  int y = 3;
  
  double intDivision = x / y;  // Integer division result: 3 (truncated)
  std::cout << "Integer division 10/3: " << intDivision << std::endl;
  
  // Using type casting for floating-point division
  double floatDivision = static_cast<double>(x) / y;  // Floating-point division: 3.33333
  std::cout << "Floating-point division 10.0/3: " << floatDivision << std::endl;
  
  return 0;
}