#include <iostream> // Required for input/output operations
using namespace std;

int main()
{
  // Initialize a string variable
  string str = "Junni";
  cout << str << endl; // Output: Junni

  // STRING CONCATENATION USING + OPERATOR:
  // Add a string literal to the end of existing string
  str = str + " Junaid";
  cout << str << endl; // Output: Junni Junaid

  // Add a string literal to the beginning of existing string
  str = "Junaid " + str;
  cout << str << endl; // Output: Junaid Junni Junaid
}