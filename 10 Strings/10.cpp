#include <iostream>
#include <algorithm>
using namespace std;

// Q: Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuild functions.

int main()
{
  string str = "Junaid";
  cout << str << endl;
  reverse(str.begin() + 2, str.end() + 5);
  cout << str << endl;
}