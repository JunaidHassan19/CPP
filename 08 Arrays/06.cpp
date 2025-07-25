#include <iostream>
using namespace std;

// Q: Calculate the product of all the Elements in the array.
int main()
{
  int arr[] = {20, 14, 2, 10, 5};
  int pro = 1;
  int n = sizeof(arr) / 4;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
    pro *= arr[i];
  }
  cout << "The product of the Elements is: " << pro << endl;
}