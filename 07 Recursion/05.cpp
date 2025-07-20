#include <iostream>
using namespace std;

// Q: Print the sum from 1 to n
void print(int i, int n, int &k)
{
  if (i > n)
  {
    cout << "The sum is:" << k << endl;
    return;
  }
  k += i;
  cout << i << endl;
  print(i + 1, n, k);
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int k = 0;
  print(1, n, k);
  return 0;
}