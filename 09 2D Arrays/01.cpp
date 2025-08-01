#include <iostream>
using namespace std;

// Basic 2D Array Example
// This program initializes a 2D array and prints its elements.

int main()
{
  int arr[2][3];
  arr[0][0] = 6;
  arr[0][1] = 1;
  arr[0][2] = 2;
  arr[1][0] = 4;
  arr[1][1] = 3;
  arr[1][2] = 5;
  for (int i = 0; i < 2; i++) // Loop through rows
  {
    for (int j = 0; j < 3; j++) // Loop through columns
    {
      cout << arr[i][j] << " ";
    }
    cout << endl; // New line after each row
  }
}