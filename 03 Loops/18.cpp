#include <iostream>
using namespace std;

int main()
{
  // This program demonstrates a basic while loop
  // A while loop repeats a block of code as long as the condition remains true
  
  int i = 0; // Initialize counter variable
  
  // While loop that prints numbers from 0 to 10
  // Condition: continue as long as i is less than or equal to 10
  while (i <= 10)
  {
    cout << i << " "; // Print current value of i followed by a space
    i++; // Increment i by 1 for next iteration
  }
  
  cout << endl << endl; // Add two new lines for better readability
  
  // EXAMPLE 2: Counting down from 10 to 1
  cout << "Counting down:" << endl;
  int countdown = 10;
  
  while (countdown >= 1)
  {
    cout << countdown << " ";
    countdown--;
  }
  cout << "Blast off!" << endl << endl;
  
  // EXAMPLE 3: Sum of first 5 natural numbers
  cout << "Sum of first 5 natural numbers:" << endl;
  int num = 1;
  int sum = 0;
  
  while (num <= 5)
  {
    sum += num; // Add current number to sum
    cout << "Adding " << num << " -> Sum: " << sum << endl;
    num++;
  }
  cout << "Final sum: " << sum << endl;
  
  return 0;
}