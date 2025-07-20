#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

/**
 * @file 04.cpp
 * @brief Demonstrates swapping two integer variables using pointers
 *
 * This program shows how to swap the values of two integer variables
 * by passing their addresses to a swap function. The swap operation
 * is performed using pointer manipulation to exchange the values
 * stored at the memory locations of the variables.
 *
 * @return int Returns 0 on successful execution
 *
 * Example output:
 * A = 10
 * B = 20
 * A = 20
 * B = 10
 */
int main()
{
  int a = 10;
  int b = 20;

  cout << "A = " << a << endl;
  cout << "B = " << b << endl;
  swap(&a, &b);
  cout << "A = " << a << endl;
  cout << "B = " << b << endl;
}
