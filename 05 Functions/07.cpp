#include <iostream>
#include <cmath>
using namespace std;

// Topic: Variable Scope demonstration
int main()
{
  cout << "Demonstrating variable scope with a for loop:\n";

  // The variable 'i' is declared inside the for loop
  // Its scope is limited to the for loop block only
  for (int i = 1; i <= 10; i++)
  {
    cout << i << " ";
  } // 'i' goes out of scope here and is destroyed

  cout << "\n\nNote: Variable 'i' only exists within the for loop block\n";

  // Uncommenting the line below would cause a compilation error
  // because 'i' is no longer in scope:
  // cout << "Final value of i: " << i << endl;  // ERROR!

  return 0;
}