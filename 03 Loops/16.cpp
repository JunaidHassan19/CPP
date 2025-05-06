#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 20; i++)
  {
    if (i == 7 || i == 13)
    {
      continue;
    }
    cout << i << " ";
  }
}