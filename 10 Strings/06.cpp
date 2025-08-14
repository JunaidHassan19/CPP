#include <iostream> // Required for input/output operations
using namespace std;

int main()
{
  // Initialize a string variable
  string str = "Junni";
  cout << str << endl; // Output: Junni

  // ADDING CHARACTERS TO THE END:
  // push_back() adds a single character to the end of the string
  str.push_back('S');
  cout << str << endl; // Output: JunniS

  str.push_back('H');
  cout << str << endl; // Output: JunniSH

  // REMOVING CHARACTERS FROM THE END:
  // pop_back() removes the last character from the string
  str.pop_back();
  cout << str << endl; // Output: JunniS (removed 'H')

  str.pop_back();
  cout << str << endl; // Output: Junni (removed 'S')

  // ADDING STRINGS:
  // append() adds a string (multiple characters) to the end
  str.append(" Hello");
  cout << str << endl; // Output: Junni Hello

  // CLEARING THE STRING:
  // clear() removes all characters, making the string empty
  str.clear();
  cout << str << endl; // Output: (empty line)
}