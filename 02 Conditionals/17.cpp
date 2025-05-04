#include <iostream>
using namespace std;

// (condition) ? (true statement) : (false statement);

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  (n % 2 == 0) ? cout << n << " is even" : cout << n << " is odd";
}