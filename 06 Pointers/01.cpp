#include <iostream>
using namespace std;

int main()
{
  // Integer variable
  int x = 65;
  cout << "Value of x: " << x << endl;
  cout << "Address of x: " << &x << endl;

  // Other data types
  char ch = 'A';
  double d = 3.14;
  float f = 2.5f;

  cout << "Address of char: " << (void *)&ch << endl; // Cast to void* for char
  cout << "Address of double: " << &d << endl;
  cout << "Address of float: " << &f << endl;

  return 0;
}