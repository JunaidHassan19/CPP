#include <iostream>
#include <cmath>
using namespace std;

// Pass by value & Pass by reference
int swap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}
int main()
{
  int x = 5;
  int y = 10;
  cout << "x = " << x << " y = " << y << endl;
  swap(x, y);
  cout << "x = " << x << " y = " << y << endl;
}