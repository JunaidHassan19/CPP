#include <iostream>
using namespace std;

void print(int i, int n) // Function to print numbers from i to n using recursion
{
  if (i > n) // Base case: when i exceeds n, stop recursion
  {
    return;
  }
  cout << i << endl;
  print(i + 1, n); // Recursive call: print the next number up
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  print(1, n); // Call the print function with initial values
}