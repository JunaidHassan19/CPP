#include <iostream>
using namespace std;

// Q : Write a program to print the transpose of the matrix entered by the user?
int main()
{
  int arrA[2][3] = {{2, 3, 5}, {5, 2, 4}};
  int transpose[3][2];

  // Print original matrix
  cout << "Original Matrix:" << endl;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arrA[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  // Calculate transpose
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      transpose[j][i] = arrA[i][j];
    }
  }

  // Print transpose
  cout << "Transpose Matrix:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << transpose[i][j] << " ";
    }
    cout << endl;
  }
}
