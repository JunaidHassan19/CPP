#include <iostream>
using namespace std;

// Q: Find the minimun value out all the elements in the array.

int main()
{
  int arr[] = {62, 55, 65, 12, 22, 88, 254, 131, 99, 45};
  int n = sizeof(arr) / 4;
  int mix = arr[0];

  for (int i = 1; i < n; i++)
  {
    cout << arr[i] << " " << endl;
    if (arr[i] < mix)
    {
      mix = arr[i];
    }
  }
  cout << "The minimum value out all the elements in the array is: " << mix;
}