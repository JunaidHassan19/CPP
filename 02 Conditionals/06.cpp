#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Enter a positive integer: ";
  cin >> x;

  if (x > 99 && x <= 999)
  {
    cout << x << " is a Three-digit number." << endl;
  }
  else
  {
    cout << x << " is not a Three-digit number." << endl;
  }
}