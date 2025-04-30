#include <iostream>  // Include iostream library for input/output operations
using namespace std; // Use the standard namespace to avoid writing std:: before cout and endl

int main() // Main function - program execution starts here
{
  // Method 1: Print a message in a single statement
  cout << "Hello, World!";
  cout << endl  // Add a newline
       << endl; // Add another newline for extra spacing

  // Method 2: Print a message with multiple statements and space separator
  cout << "Hello";  // Print "Hello"
  cout << " ";      // Print a space
  cout << "World!"; // Print "World!"
  cout << endl      // Add a newline
       << endl;     // Add another newline for extra spacing

  // Method 3: Print a message with multiple statements and newline character
  cout << "Hello";  // Print "Hello"
  cout << "\n";     // Print a newline character
  cout << "World!"; // Print "World!"
  cout << endl      // Add a newline
       << endl;     // Add another newline for extra spacing

  return 0; // Return 0 to indicate successful program execution
}