#include <iostream>
using namespace std;

// Q: Make a function which calculates "a" raised to the power "b" by recursion

int pow(int a, int b)
{
  if (b == 0)
    return 1;
  else
    return a * pow(a, b - 1);
}

int main()
{
  int a;
  cout << "Enter Base: ";
  cin >> a;
  int b;
  cout << "Enter power: ";
  cin >> b;
  cout << pow(a, b);
}