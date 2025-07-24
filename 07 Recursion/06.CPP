#include <iostream>
using namespace std;

// Q: Make a function which calculates the factoral of n using resursion.

int fact(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return n * (fact(n - 1));
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  cout << fact(n);
}