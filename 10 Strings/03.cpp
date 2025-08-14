#include <iostream> // Required for input/output operations
using namespace std;

int main()
{
  // Initialize a string variable
  string str = "Junni";

  // STRING LENGTH METHODS:
  // Both .length() and .size() return the number of characters in the string
  cout << str.length() << endl; // Output: 5 (counts characters in "Junni")
  cout << str.size() << endl;   // Output: 5 (same as .length(), just different name)

  // CHARACTER AND ASCII CONVERSIONS:
  // Convert integer to its corresponding ASCII character
  int x = 0;
  cout << (char)x << endl; // Output: null character (ASCII value 0)

  // Convert character to its ASCII integer value
  char ch = '\0';          // null terminator character (same as ASCII 0)
  cout << (int)ch << endl; // Output: 0 (ASCII value of null character)
}