#include <iostream>
using namespace std;

// Basic 2D Array Example - user input and initialization

int main()
{
  int x;
  cout << "Enter the number of rows: ";
  cin >> x;

  int y;
  cout << "Enter the number of columns: ";
  cin >> y;

  int arr[x][y];

  // Initialize the array
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      arr[i][j] = i * y + j + 1;
    }
  }

  // Print the array
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < y; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}