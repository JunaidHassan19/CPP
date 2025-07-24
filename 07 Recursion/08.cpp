#include <iostream>
using namespace std;

// Q: Write a function to calculate the nth fibonacci number using resursion  *Multiple Calls

int fibo(int n)
{
  if (n == 1 || n == 2)
    return 1;
  else
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << fibo(n);
}