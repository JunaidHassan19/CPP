#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "Enter first number: ";
  cin >> a;

  cout << "Enter second number: ";
  cin >> b;

  cout << "Enter third number: ";
  cin >> c;

  // Nested if-else statements to find the largest number
  if (a > b) // First check if 'a' is greater than 'b'
  {
    if (a > c) // If 'a' is greater than 'b', now check if 'a' is also greater than 'c'
    {
      cout << "The largest number is: " << a << endl; // 'a' is the largest
    }
    else
    {
      cout << "The largest number is: " << c << endl; // 'c' is the largest (since 'c' is greater than 'a' and 'a' is greater than 'b')
    }
  }
  else // If 'b' is greater than or equal to 'a'
  {
    if (b > c) // Check if 'b' is greater than 'c'
    {
      cout << "The largest number is: " << b << endl; // 'b' is the largest
    }
    else
    {
      cout << "The largest number is: " << c << endl; // 'c' is the largest
    }
  }
}