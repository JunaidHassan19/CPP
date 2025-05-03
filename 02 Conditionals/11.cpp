#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "Enter first number: ";
  cin >> a;

  int b;
  cout << "Enter second number: ";
  cin >> b;

  int c;
  cout << "Enter third number: ";
  cin >> c;

  if (a < b && a < c)
  {
    cout << "The Least number is: " << a << endl;
  }
  else if (b < a && b < c)
  {
    cout << "The Least number is: " << b << endl;
  }
  else
  {
    cout << "The Least number is: " << c << endl;
  }
}