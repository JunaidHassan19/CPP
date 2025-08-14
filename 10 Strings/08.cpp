#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string str = "Junni";
  cout << str << endl;
  reverse(str.begin(), str.end());
  cout << str << endl;
}