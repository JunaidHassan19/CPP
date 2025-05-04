#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cout << "Enter Ist Quadrant coordinates (x, y): ";
  cin >> x;

  cout << "Enter IInd Quadrant coordinates (x, y): ";
  cin >> y;

  if (x > 0 && y > 0)
  {
    cout << "The point is in the Ist Quadrant." << endl;
  }
  else if (x < 0 && y > 0)
  {
    cout << "The point is in the IInd Quadrant." << endl;
  }
  else if (x < 0 && y < 0)
  {
    cout << "The point is in the IIIrd Quadrant." << endl;
  }
  else if (x > 0 && y < 0)
  {
    cout << "The point is in the IVth Quadrant." << endl;
  }
  else if (x == 0 && y == 0)
  {
    cout << "The point is at the origin." << endl;
  }
  else if (x == 0)
  {
    cout << "The point is on the Y-axis." << endl;
  }
  else if (y == 0)
  {
    cout << "The point is on the X-axis." << endl;
  }
}