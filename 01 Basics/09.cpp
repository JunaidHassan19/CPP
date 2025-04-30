#include <iostream>
using namespace std;

int main()
{
  // Formula: V = (4/3) * π * r^3

  float Pi = 3.14;
  float r = 5;
  float v = (4 / 3) * Pi * (r * r * r); // Volume of the sphere
  cout << "Volume of the sphere: " << v << endl;
}