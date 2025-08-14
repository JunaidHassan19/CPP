#include <iostream> // Required for input/output operations
using namespace std;

int main()
{
  // Initialize a string variable with the value "Junni"
  string name = "Junni";

  // Print the entire string
  cout << name << endl; // Output: Junni

  // Access and print the first character of the string (index 0)
  cout << name[0] << endl; // Output: J (strings are 0-indexed)

  // Modify individual characters in the string
  name[0] = 'S'; // Change first character from 'J' to 'S'
  name[4] = 'd'; // Change last character from 'i' to 'd'

  // Print the modified string
  cout << name << endl; // Output: Sunnd (J->S, i->d)
}