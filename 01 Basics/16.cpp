#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Enter a number: ";
  cin >> x;
  float y = (float)x / 2; //(Typecasting) Cast x to float before division

  cout << "The half  of: " << x << " is: " << y << endl;
  // cout << "The half  of: " << x << " is: " << float(x) / 2 << endl;
}