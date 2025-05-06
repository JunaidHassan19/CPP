#include <iostream>
using namespace std;

int main()
{
  // This program demonstrates the use of a do-while loop
  // A do-while loop always executes at least once before checking the condition

  int i = 1; // Initialize counter variable

  // Start of do-while loop
  do
  {
    cout << i << " "; // Print the current value of i
    i++;              // Increment i by 1
  } while (i <= 10); // Continue loop as long as i is less than or equal to 10

  // Output: 1 2 3 4 5 6 7 8 9 10

  cout << "\n\n--- Additional do-while loop examples ---\n\n";

  // Example 1: Countdown
  cout << "Countdown example:\n";
  int count = 5;
  do
  {
    cout << "Countdown: " << count << endl;
    count--;
  } while (count > 0);
  cout << "Blast off!\n\n";

  // Example 2: Menu-driven program example
  cout << "Menu example (simplified):\n";
  int choice = 0;

  // In a real program, you would get user input each time
  // This is just a simulation of how a menu works with do-while
  do
  {
    cout << "1. Option 1\n";
    cout << "2. Option 2\n";
    cout << "3. Exit\n";
    cout << "Current choice: " << ++choice << endl;

    // In a real program: cin >> choice;

  } while (choice < 3);
  cout << "Program ended\n";

  return 0;
}