#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int i = 2;

  while (i <= n / 2)
  {
    if (n % i == 0)
    {
      cout << n << " Is a composite number";
      break;
    }
    i++;
  }

  if (i > n / 2)
    cout << n << " Is a prime number";

  return 0;
}