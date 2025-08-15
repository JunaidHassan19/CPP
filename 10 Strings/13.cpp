#include <iostream> // Required for input/output operations
using namespace std;

int main()
{
  // Initialize a string variable with numeric characters
  string s = "123456789";

  // CONVERTING STRING TO INTEGER:
  // stoi() (string to integer) converts a string of digits to an integer
  int x = stoi(s);

  cout << s << endl; // Output: 123456789 (as string)
  cout << x << endl; // Output: 123456789 (as integer)

  // Note: Both outputs look the same, but 's' is a string
  // while 'x' is an integer that can be used for math operations
}