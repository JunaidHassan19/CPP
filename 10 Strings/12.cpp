#include <iostream>
using namespace std;

// Q: Retuen the total number of digits in a number without using any loop.
//  try using inbuld to_string() function.

int main()
{
  int x = 123456789;
  string s = to_string(x);
  cout << s.length() << endl;
}