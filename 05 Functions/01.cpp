#include <iostream>
using namespace std;

/*
  Function: A block of code that performs a specific task.
  It can take inputs (parameters) and can return a value.

  This file demonstrates different examples of function usage in C++:
  1. Basic function definition and calling
  2. Functions calling other functions
  3. Function execution flow
*/

// Example 1: Basic function definition
// This function doesn't take any parameters and doesn't return anything (void)
void greet()
{
  cout << "Hello Good Morning!" << endl;
  cout << "How are you?" << endl;
}

// First main function - demonstrates basic function calling
int main()
{
  greet();  // Call the greet function
  return 0; // Always return 0 from main to indicate successful execution
}

/*
  Example 2: Multiple independent functions
  This example shows two separate functions that don't interact with each other
*/

// Function to display a message about China
void china()
{
  cout << "Hello China!" << endl;
  return; // explicit return (optional for void functions)
}

// Function to display a message about Beijing
void beijing()
{
  cout << "Hello Beijing!" << endl;
  return; // explicit return (optional for void functions)
}

// Second main function - demonstrates calling multiple functions
int main()
{
  china();   // Call china function first
  beijing(); // Call beijing function second
  cout << "Hello World!" << endl;
  return 0; // Return 0 to indicate successful program execution
}

/*
  Example 3: Function calling another function (Function Chaining)
  This example demonstrates how one function can call another function
  This creates a chain of function calls: main() -> beijing() -> china()
*/

// Function to display a message about China (redefined for this example)
void china()
{
  cout << "Hello China!" << endl;
  return; // explicit return (optional for void functions)
}

// Function that calls another function
void beijing()
{
  cout << "Hello Beijing!" << endl;
  china(); // This function calls the china() function
  return;  // explicit return (optional for void functions)
}

// Third main function - demonstrates function chaining
int main()
{
  beijing(); // Call beijing function, which will also call china function
  cout << "Hello World!" << endl;
  return 0; // Return 0 to indicate successful program execution
}

/*
  Execution Flow:
  1. main() function starts
  2. beijing() function is called
  3. Inside beijing(), "Hello Beijing!" is printed
  4. china() function is called from beijing()
  5. Inside china(), "Hello China!" is printed
  6. china() function returns to beijing()
  7. beijing() function returns to main()
  8. "Hello World!" is printed in main()
  9. Program ends

  Output will be:
  Hello Beijing!
  Hello China!
  Hello World!
*/