#include <iostream> // Required for input/output operations (cout, cin, getline)
using namespace std;

int main()
{
  // METHOD 1: Creating strings using character arrays
  // This demonstrates the old C-style way of creating strings
  char arr[] = {'J', 'u', 'n', 'n', 'i'};
  for (int i = 0; i <= 5; i++)
  {
    cout << arr[i]; // Print each character individually
  }

  // METHOD 2: Direct string output
  // Simple way to print a string literal directly
  cout << "Hey i'm Junni" << endl;

  // METHOD 3: Using C++ string class
  // This is the modern C++ way to work with strings
  string str = "Hey i'm Junni";
  cout << str;

  // METHOD 4: Reading user input as a string
  string name;              // Declare a string variable to store user input
  cout << "Enter a name: "; // Prompt user for input

  // cin >> name;  // This would only read until the first space
  getline(cin, name); // This reads the entire line including spaces

  cout << "Hello " << name << endl; // Display greeting with the entered name
}