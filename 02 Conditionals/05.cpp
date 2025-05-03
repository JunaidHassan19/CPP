#include <iostream>
using namespace std;

int main()
{
  int l, b;
  cout << "Enter the length of the rectangle: ";
  cin >> l;

  cout << "Enter the breadth of the rectangle: ";
  cin >> b;

  int area = l * b;
  int perimeter = 2 * (l + b);

  if (area > perimeter)
  {
    cout << "Area is greater than perimeter." << endl;
  }
  else if (area < perimeter)
  {
    cout << "Perimeter is greater than area." << endl;
  }
  else
  {
    cout << "Area and perimeter are equal." << endl;
  }
}