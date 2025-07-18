#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  int middle = n / 2 + 1;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == middle || j == middle)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
}