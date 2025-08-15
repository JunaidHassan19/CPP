#include <iostream>
#include <algorithm>
using namespace std;

// Q: Input a string of even length and reverse the first half of the string.

int main()
{
  string name = "Junaid";
  cout << name << endl;
  reverse(name.begin(), name.begin() + 3);
  cout << name << endl;
}