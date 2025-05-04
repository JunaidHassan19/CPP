#include <iostream>
using namespace std;

int main()
{
  int a;
  cout << "enter first number: ";
  cin >> a;

  int b;
  cout << "enter second number: ";
  cin >> b;

  char ch;
  cout << "enter operator: ";
  cin >> ch;

  /*
  // using else-if statements to perform arithmetic operations
  if (ch == '+')
  {
    cout << "Sum is: " << a + b << endl;
  }
  else if (ch == '-')
  {
    cout << "Subtraction is: " << a - b << endl;
  }
  else if (ch == '*')
  {
    cout << "Multiplication is: " << a * b << endl;
  }
  else if (ch == '/')
  {
    cout << "Division is: " << a / b << endl;
  }
  else
  {
    cout << "Invalid operator" << endl;
  }
  */

  // using switch-case statements to perform arithmetic operations
  switch (ch)
  {
  case '+':
    cout << "The sum is: " << a + b << endl;
    break;

  case '-':
    cout << "The Subtraction is: " << a - b << endl;
    break;

  case '/':
    cout << "The Division is: " << a / b << endl;
    break;

  case '*':
    cout << "The Multiplication is: " << a * b << endl;
    break;

  default:
    cout << "Invalid " << endl;
  }
}
