#include <iostream>
using namespace std;

// Q: Input a string of user and update all the even positions in the string to character 'a'.Consider 0-based indexing.

int naim()
{
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  // Update even positions (0-based indexing) to 'a'
  for (int i = 0; i < str.length(); i += 2)
  {
    str[i] = 'a';
  }

  cout << str << endl;
  return 0;
}