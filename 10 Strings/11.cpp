#include <iostream> // Required for input/output operations
using namespace std;

int main()
{
  // Initialize an integer variable
  int x = 123456789;
  cout << x << endl; // Output: 123456789 (as integer)

  // CONVERTING INTEGER TO STRING:
  // to_string() converts numeric types to their string representation
  string s = to_string(x);
  cout << s << endl; // Output: 123456789 (as string)

  // Note: Both outputs look the same, but 'x' is an integer
  // while 's' is a string that can be manipulated like text
}