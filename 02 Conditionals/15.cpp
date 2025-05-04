#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "Enter marks: ";
  cin >> a;

  if (a >= 80 && a <= 100)
  {
    cout << "Very Good" << endl;
  }
  else if (a >= 60 && a < 80)
  {
    cout << "Good" << endl;
  }
  else if (a >= 40 && a < 60)
  {
    cout << "Average" << endl;
  }
  else if (a >= 0 && a < 40)
  {
    cout << "Poor" << endl;
  }
  else
  {
    cout << "Invalid marks" << endl;
  }
}