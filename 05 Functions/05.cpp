#include <iostream>
#include <cmath>
using namespace std;

// Q: Pascal triangle

int fact(int x)
{
  int f = 1;
  for (int i = 1; i <= x; i++)
  {
    f *= i;
  }
  return f;
}

int ncr(int n, int r)
{
  // int a = fact(n);
  // int b = fact(r);
  // int c = fact(r - n);
  // return a / (b * c);
  return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
  int n;
  cout << "Enter the number of rows for Pascal's Triangle: ";
  cin >> n;

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << ncr(i, j) << " ";
    }
    cout << endl;
  }
}