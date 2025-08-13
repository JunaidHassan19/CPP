#include <iostream>
using namespace std;

// Q: Write a program to add two matrices:

int main()
{
  int arrA[3][3] = {2, 4, 3, 4, 5, 6};
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arrA[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

  int arrB[3][3] = {3, 5, 9, 7, 5, 2};
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arrB[i][j] << " ";
    }
    cout << endl;
  }

  int arrC[3][3];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      arrC[i][j] = arrA[i][j] + arrB[i][j];
    }
    cout << endl;
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arrC[i][j] << "  ";
    }
    cout << endl;
  }
}
