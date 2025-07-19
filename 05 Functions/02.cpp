#include <iostream>
using namespace std;

/*
  This file demonstrates function parameters and return values in C++:
  1. Functions with parameters but no return value (void functions)
  2. Functions with parameters and return values
  3. How to pass arguments to functions
  4. How to use returned values from functions
*/

// Example 1: Function with parameters but no return value
// This function takes two integer parameters and prints their sum
// 'void' means this function doesn't return anything
void sum(int a, int b) // 'a' and 'b' are parameters (inputs to the function)
{
  cout << "Sum: " << a + b << endl; // Calculate and display the sum directly
  // No return statement needed for void functions
}

// First main function - demonstrates calling a void function with parameters
int main()
{
  sum(5, 10); // Call the sum function with arguments 5 and 10
              // Arguments are the actual values passed to the function
              // Output will be: Sum: 15
  return 0;
}

/*
  Example 2: Function with parameters and return value
  This function takes two integer parameters and returns their sum
  'int' before the function name means this function returns an integer value
*/
int addNumbers(int a, int b) // Different name to avoid conflict with void sum()
{
  return a + b; // 'return' keyword sends the calculated value back to the caller
                // The function stops executing after return statement
}

// Second main function - demonstrates calling a function that returns a value
int main()
{
  // Method 1: Use the returned value directly in cout
  cout << "Sum using return function: " << addNumbers(100, 50) << endl;
  // addNumbers(100, 50) returns 150, which is then printed

  // Method 2: Store the returned value in a variable first
  int result = addNumbers(25, 75); // Store returned value in 'result'
  cout << "Stored result: " << result << endl;

  return 0; // Return 0 to indicate successful program execution
}

/*
  KEY CONCEPTS EXPLAINED:

  1. PARAMETERS vs ARGUMENTS:
     - Parameters: Variables in function definition (int a, int b)
     - Arguments: Actual values passed when calling function (5, 10)

  2. VOID FUNCTIONS vs RETURN FUNCTIONS:
     - void sum(int a, int b): Performs action but doesn't return value
     - int addNumbers(int a, int b): Performs calculation AND returns result

  3. FUNCTION CALLING METHODS:
     - Direct use: cout << addNumbers(100, 50);
     - Store first: int result = addNumbers(25, 75); cout << result;

  4. EXECUTION FLOW:
     Example 1: main() -> sum(5,10) -> prints "Sum: 15" -> returns to main()
     Example 2: main() -> addNumbers(100,50) -> returns 150 -> prints result

  5. WHEN TO USE WHICH:
     - Use void functions when you want to perform an action (like printing)
     - Use return functions when you need to calculate and use the result later

  Expected Output:
  Sum: 15
  Sum using return function: 150
  Stored result: 100
*/