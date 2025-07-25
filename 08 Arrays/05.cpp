#include <iostream>
using namespace std;

// Q: Calculate the sum of all the elements in the given array.

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / 4;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";

    sum += arr[i];
  }
  cout << "The sum of the Elements is: " << sum;
}