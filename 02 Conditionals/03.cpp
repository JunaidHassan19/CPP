#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Enter an integer to check its absolut value: ";
  cin >> x;

  // if (x < 0)
  // {
  //   cout << "The absolute value of: " << x << " is " << -x << endl;
  // }
  // else
  // {
  //   cout << "The absolute value of: " << x << " is " << x << endl;
  // }
  if (x < 0)
    x = -x;
  cout << "The absolute value of: " << x << " is " << x << endl;
}