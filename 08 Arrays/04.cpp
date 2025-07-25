#include <iostream>
using namespace std;

//  Passing Array to Functions

void changeEl(int arr[])
{
  arr[0] = 11;
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  changeEl(arr);
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
}