#include <iostream>
using namespace std;

int main()
{
  /*
  int arr[5];
  arr[0] = 2;
  arr[1] = 4;
  arr[2] = 6;
  arr[3] = 8;
  arr[4] = 10;

  cout << arr[0];
  cout << arr[1];
  cout << arr[2];
  cout << arr[3];
  cout << arr[4];
  */

  // ========================

  int arr2[5];
  cout << "Enter array Elements: ";
  for (int i = 0; i <= 4; i++)
  {
    cin >> arr2[i];
  }

  for (int i = 0; i <= 4; i++)
  {
    cout << arr2[i] << " ";
  }
}
