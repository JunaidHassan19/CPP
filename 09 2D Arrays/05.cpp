#include <iostream>
using namespace std;
// Store 10 at every index of a 2D array
int main()
{
  int arr[5][5];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      arr[i][j] = 10;
    }
  }
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}