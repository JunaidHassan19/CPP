#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "Enter junni's age: ";
  cin >> a;

  cout << "Enter your's age: ";
  cin >> b;

  cout << "Enter his age: ";
  cin >> c;

  if (a < b)
  {
    if (a < c)
    {
      cout << "The Youngest one is: " << a << endl;
    }
    else
    {
      cout << "The Youngest one is: " << c << endl;
    }
  }
  else
  {
    if (b < c)
    {
      cout << "The Youngest one is: " << b << endl;
    }
    else
    {
      cout << "The Youngest one is: " << c << endl;
    }
  }
}