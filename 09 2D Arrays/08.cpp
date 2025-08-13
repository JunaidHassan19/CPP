#include <iostream>
using namespace std;

// Q: Find the minimum element in a given matrix.

int main()
{
  int arr[5][5] = {{100, 15, 11, 200, 25}, {260, 14, 550, 408, 39}, {15, 47, 23, 855, 54}, {15, 680, 40, 100, 50}, {90, 60, 10, 450, 560}};
  int mini = arr[0][0];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cout << arr[i][j] << "  ";
      mini = min(mini, arr[i][j]);
    }
    cout << endl;
  }
  cout << endl;

  cout << "Minimum element: " << mini << endl;
  return 0;
}