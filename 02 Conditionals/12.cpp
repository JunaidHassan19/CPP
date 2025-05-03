#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "Enter a number: ";
  cin >> a;

  if ((a % 5 == 0 || a % 3 == 0) && a % 15 != 0)
  {
    cout << "The number is divisible by 5 or 3 but not divisible by 15." << endl;
  }
  else
  {
    cout << "The number is not divisible by 5 or 3." << endl;
  }
}