#include <iostream>
using namespace std;

int main()
{
  int n, originalNum;
  cout << " Enter a Number: ";
  cin >> n;
  originalNum = n;  // Store the original number
  int rev = 0;

  while (n != 0)
  {
    int lastDigit = n % 10;
    rev *= 10;
    rev += lastDigit;
    n = n / 10;
  }
  
  cout << "Original number: " << originalNum << endl;
  cout << "Reversed number: " << rev << endl;
  cout << "Sum of original and reversed number: " << originalNum + rev << endl;
}