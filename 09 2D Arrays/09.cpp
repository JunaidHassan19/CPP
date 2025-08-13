#include <iostream>
using namespace std;

// Q: Find the sum of all elements in a given matrix:

int main()
{
  int arr[3][3] = {2, 4, 3, 4, 5, 6, 5, 9, 2};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int sum = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum += arr[i][j];
    }
  }
  cout << "Sum of all elements: " << sum << endl;
}
