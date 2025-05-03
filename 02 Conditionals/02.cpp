#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Enter a positive integer to check if it is divisible by 5 or not: ";
  cin >> x;

  if (x % 5 == 0)
  {
    cout << x << " is divisible by 5." << endl;
  }
  else
  {
    cout << x << " is not divisible by 5." << endl;
  }
}