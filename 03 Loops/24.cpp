#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << " Enter a Number: ";
  cin >> n;
  int sum = 0;
  
  // Extract each digit and add it to sum if it's even
  while (n > 0)
  {
    int digit = n % 10;  // Extract the last digit
    if (digit % 2 == 0)  // Check if the digit is even
    {
      sum += digit;     // Add the even digit to sum
    }
    n = n / 10;         // Remove the last digit
  }
  
  cout << "Sum of even digits: " << sum;
  return 0;
}