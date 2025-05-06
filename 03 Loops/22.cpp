#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << " Enter a Number: ";
  cin >> n;
  int sum = 0;

  while (n != 0)
  {
    int lastDigit = n % 10;
    n = n / 10;
    sum += lastDigit;
  }
  cout << sum;
}