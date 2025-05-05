#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  bool flag = true; // true means prime

  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      flag = false; // false means composite
      break;
    }
  }
  if (n == 1)
  {
    cout << n << " Neither Prime Nor Composite";
  }
  else if (flag == true)
  {
    cout << n << " Prime";
  }
  else
  {
    cout << n << " Composite";
  }
}