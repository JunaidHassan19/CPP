#include <iostream>
using namespace std;
// marks and roll numbers of students in a 2D array
int main()
{
  int arr[4][2] = {{60, 12},
                   {65, 13},
                   {78, 14},
                   {55, 15}};
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}