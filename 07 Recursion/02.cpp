#include <iostream>
using namespace std;

// Q: Print n to 1

void print(int n) // Function to print numbers from n down to 1 using recursion
{
  if (n == 0) // Base case: when n is 0, stop recursion
  {
    return;
  }
  cout << n << endl; // Print the current number n
  print(n - 1);      // Recursive call: print the next number down
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  print(n); // Call the print function to start printing from n down to 1
  return 0; // Return 0 to indicate successful program execution
}