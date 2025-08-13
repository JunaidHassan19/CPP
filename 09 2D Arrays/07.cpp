#include <iostream>
using namespace std;

// Q: Find the maximum element in a given matrix.

int main()
{
  int arr[5][5] = {{100, 15, 11, 200, 25}, {260, 14, 550, 408, 39}, {15, 47, 23, 855, 54}, {15, 680, 40, 100, 50}, {90, 60, 10, 450, 560}};
  int mx = arr[0][0];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cout << arr[i][j] << "  ";
      mx = max(mx, arr[i][j]);
    }
    cout << endl;
  }
  cout << endl;

  cout << "Maximum element: " << mx << endl;
  return 0;
}