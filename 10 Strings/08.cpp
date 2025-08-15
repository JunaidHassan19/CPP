#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  // Initialize a std::string with a literal
  string str = "Junni";
  // Print the original string
  cout << str << endl; // Output: Junni

  // reverse() from <algorithm> reverses the range in-place.
  // here we pass iterators to the beginning and one-past-the-end
  // of the string: str.begin() and str.end().
  reverse(str.begin(), str.end());

  // Print the reversed string
  cout << str << endl; // Output: inniJ
}