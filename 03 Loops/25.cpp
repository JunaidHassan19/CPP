#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << " Enter a Number: ";
  cin >> n;
  int rev = 0;

  while (n != 0)
  {
    int lastDigit = n % 10;
    rev *= 10;
    rev += lastDigit;
    n = n / 10;
  }
  cout << rev;
}