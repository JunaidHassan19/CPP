#include <iostream>
using namespace std;

// Q: Find the maximun value out all the elements in the array.

int main()
{
  int arr[] = {2, 5, 65, 12, 22, 0, 254, 131, 99, 45};
  int n = sizeof(arr) / 4;
  int max = arr[0];

  for (int i = 1; i < n; i++)
  {
    cout << arr[i] << " " << endl;
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  cout << "The maximun value out all the elements in the array is: " << max;
}