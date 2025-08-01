#include <iostream>
using namespace std;

// Basic 2D Array Example - Transpose of a Matrix

int main()
{
  int arr[2][3];
  arr[0][0] = 6;
  arr[0][1] = 1;
  arr[0][2] = 2;
  arr[1][0] = 4;
  arr[1][1] = 3;
  arr[1][2] = 5;
  for (int j = 0; j < 3; j++) // Loop through columns
  {
    for (int i = 0; i < 2; i++) // Loop through rows
    {
      cout << arr[i][j] << " ";
    }
    cout << endl; // New line after each row
  }
}