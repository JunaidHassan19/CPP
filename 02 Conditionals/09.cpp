#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Enter first side of triangle: ";
  cin >> a;

  cout << "Enter second side of triangle: ";
  cin >> b;

  cout << "Enter third side of triangle: ";
  cin >> c;

  if (a + b > c && a + c > b && b + c > a)
  {
    cout << a << " " << b << " " << c << " are the sides of triangle" << endl;
  }
  else
  {
    cout << a << " " << b << " " << c << " are not the sides of triangle" << endl;
  }
}