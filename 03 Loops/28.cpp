#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << " Enter a Number: ";
  cin >> n;
  
  cout << "Factorials of first " << n << " numbers:" << endl;
  
  for (int i = 1; i <= n; i++)
  {
    int factorial = 1;
    for (int j = 1; j <= i; j++)
    {
      factorial *= j;
    }
    cout << i << "! = " << factorial << endl;
  }
  
  return 0;
}