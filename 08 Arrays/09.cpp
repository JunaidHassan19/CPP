#include <iostream>
using namespace std;

// Q: Count the numner of elements in the given array greater than a given number X.

int main()
{
  int arr[] = {1, 0, 2, 8, 10, 12, 4, 6, 1, 3};
  int x = 4;
  int count = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
    if (arr[i] > x)
      count++;
  }
  cout << endl;
  cout << "Elements greater than 4 are: " << count << " ";
}