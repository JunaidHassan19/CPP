#include <iostream>
using namespace std;

int main()
{

  int r;
  cout << "Enter the number of rows: ";
  cin >> r;

  int c;
  cout << "Enter the number of columns: ";
  cin >> c;

  for (int i = 1; i <= r; i++)
  {
    for (int j = 1; j <= c; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}