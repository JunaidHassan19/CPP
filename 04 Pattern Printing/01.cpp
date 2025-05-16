#include <iostream>
using namespace std;

int main() // Main function where the program execution begins
{
  // Print a 5x3 rectangle of asterisks
  cout << "*****" << endl;
  cout << "*****" << endl;
  cout << "*****" << endl;
  cout << endl  // Print a blank line
       << endl; // Print another blank line

  int n;                                // Declare an integer variable 'n' to store the number of rows
  cout << "Enter the number of rows: "; // Prompt the user to enter the number of rows
  cin >> n;                             // Read the input from the user and store it in 'n'

  // Loop to print 'n' rows of asterisks
  for (int i = 1; i <= n; i++) // Loop from 1 to 'n' (inclusive)
  {
    cout << "*****" << endl; // Print a line of five asterisks
  }
}