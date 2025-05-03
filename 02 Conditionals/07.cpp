#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Enter a number: ";
  cin >> x;

  if (x % 5 == 0 && x % 3 == 0)
  {
    cout << " the number " << x << " is divisible by 5 and 3" << endl;
  }
  else
  {
    cout << " the number " << x << " is not divisible by 5 and 3" << endl;
  }
}