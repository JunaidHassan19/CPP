#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {2, 4, 6, 8, 10};
  for (int i = 0; i <= 4; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  for (int i = 4; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }
}