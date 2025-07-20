#include <iostream>
using namespace std;

// Q: Print 1 to n without exter parameter
void print(int n)
{
  if (n == 0) // Base case: when n is 0, stop recursion
  {
    return;
  }
  print(n - 1);      // Recursive call: print the next number down
  cout << n << endl; // Print the current number n after the recursive call
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  print(n); // Call the print function to start printing from 1 to n
  return 0;
}