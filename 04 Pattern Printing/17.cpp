#include <iostream>
using namespace std;

int main()
{
  int n;

  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << 2 * j - 1 << " ";
    }
    cout << endl;
  }
}