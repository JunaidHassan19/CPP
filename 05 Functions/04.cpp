#include <iostream>
#include <cmath>
using namespace std;

/*
  This file demonstrates COMBINATION and PERMUTATION calculations in C++
  
  MATHEMATICAL FORMULAS:
  - Combination C(n,r) = n! / (r! × (n-r)!)
  - Permutation P(n,r) = n! / (n-r)!
  
  WHERE:
  - n! (factorial) = n × (n-1) × (n-2) × ... × 1
  - n = total number of items
  - r = number of items to choose/arrange
  
  DIFFERENCE:
  - Combination: Order doesn't matter (selecting items)
  - Permutation: Order matters (arranging items)
  
  This file shows 4 different approaches:
  1. Combination calculation without functions
  2. Combination calculation using functions
  3. Permutation calculation without functions  
  4. Permutation calculation using functions
*/

// ==================== EXAMPLE 1: COMBINATION WITHOUT FUNCTIONS ====================
// This approach calculates combination by writing factorial loops directly in main()

int main()
{
  cout << "=== COMBINATION CALCULATOR (Without Functions) ===" << endl;
  
  int n, r;
  cout << "Enter total items (n): ";
  cin >> n;
  cout << "Enter items to choose (r): ";
  cin >> r;

  // Calculate n! (n factorial)
  int a = 1;  // Will store n!
  for (int i = 1; i <= n; i++)
  {
    a *= i;  // Multiply: 1×2×3×...×n
  }
  cout << n << "! = " << a << endl;

  // Calculate r! (r factorial)  
  int b = 1;  // Will store r!
  for (int i = 1; i <= r; i++)
  {
    b *= i;  // Multiply: 1×2×3×...×r
  }
  cout << r << "! = " << b << endl;

  // Calculate (n-r)! factorial
  int c = 1;  // Will store (n-r)!
  for (int i = 1; i <= n - r; i++)
  {
    c *= i;  // Multiply: 1×2×3×...×(n-r)
  }
  cout << "(" << n << "-" << r << ")! = " << c << endl;
  
  // Apply combination formula: C(n,r) = n! / (r! × (n-r)!)
  int combination = a / (b * c);
  cout << "Combination C(" << n << "," << r << ") = " << combination << endl << endl;
  
  return 0;
}

// ==================== EXAMPLE 2: COMBINATION WITH FUNCTIONS ====================
// This approach uses a reusable factorial function to avoid code repetition

// Function to calculate factorial of any number
// INPUT: x (the number to find factorial of)
// OUTPUT: factorial value (x!)
int fact(int x)
{
  int f = 1;  // Initialize result
  for (int i = 1; i <= x; i++)
  {
    f *= i;  // Multiply: f = f × i
  }
  return f;  // Return the calculated factorial
}

int main()
{
  cout << "=== COMBINATION CALCULATOR (With Functions) ===" << endl;
  
  int n, r;
  cout << "Enter total items (n): ";
  cin >> n;
  cout << "Enter items to choose (r): ";
  cin >> r;

  // Use the fact() function to calculate factorials
  int a = fact(n);      // Calculate n!
  int b = fact(r);      // Calculate r!  
  int c = fact(n - r);  // Calculate (n-r)!
  
  cout << n << "! = " << a << endl;
  cout << r << "! = " << b << endl;
  cout << "(" << n << "-" << r << ")! = " << c << endl;
  
  // Apply combination formula: C(n,r) = n! / (r! × (n-r)!)
  int combination = a / (b * c);
  cout << "Combination C(" << n << "," << r << ") = " << combination << endl << endl;
  
  return 0;
}

// ==================== EXAMPLE 3: PERMUTATION WITHOUT FUNCTIONS ====================
// This approach calculates permutation by writing factorial loops directly in main()

int main()
{
  cout << "=== PERMUTATION CALCULATOR (Without Functions) ===" << endl;
  
  int n, r;
  cout << "Enter total items (n): ";
  cin >> n;
  cout << "Enter items to arrange (r): ";
  cin >> r;

  // Calculate n! (n factorial)
  int a = 1;  // Will store n!
  for (int i = 1; i <= n; i++)
  {
    a *= i;  // Multiply: 1×2×3×...×n
  }
  cout << n << "! = " << a << endl;

  // Calculate (n-r)! factorial
  int b = 1;  // Will store (n-r)!
  for (int i = 1; i <= n - r; i++)
  {
    b *= i;  // Multiply: 1×2×3×...×(n-r)
  }
  cout << "(" << n << "-" << r << ")! = " << b << endl;
  
  // Apply permutation formula: P(n,r) = n! / (n-r)!
  int permutation = a / b;
  cout << "Permutation P(" << n << "," << r << ") = " << permutation << endl << endl;
  
  return 0;
}

// ==================== EXAMPLE 4: PERMUTATION WITH FUNCTIONS ====================
// This approach uses a reusable factorial function for permutation calculation

// Function to calculate factorial (reused from above, but renamed for clarity)
// INPUT: n (the number to find factorial of)  
// OUTPUT: factorial value (n!)
int Permu(int n)
{
  int p = 1;  // Initialize result
  for (int i = 1; i <= n; i++)
  {
    p *= i;  // Multiply: p = p × i
  }
  return p;  // Return the calculated factorial
}

int main()
{
  cout << "=== PERMUTATION CALCULATOR (With Functions) ===" << endl;
  
  int n, r;
  cout << "Enter total items (n): ";
  cin >> n;
  cout << "Enter items to arrange (r): ";
  cin >> r;

  // Use the Permu() function to calculate factorials
  int a = Permu(n);      // Calculate n!
  int b = Permu(n - r);  // Calculate (n-r)!
  
  cout << n << "! = " << a << endl;
  cout << "(" << n << "-" << r << ")! = " << b << endl;

  // Apply permutation formula: P(n,r) = n! / (n-r)!
  int permutation = a / b;
  cout << "Permutation P(" << n << "," << r << ") = " << permutation << endl << endl;
  
  return 0;
}

/*
  ======================== COMPREHENSIVE SUMMARY ========================
  
  MATHEMATICAL CONCEPTS:
  
  1. FACTORIAL (n!):
     - Definition: n! = n × (n-1) × (n-2) × ... × 1
     - Examples: 5! = 5×4×3×2×1 = 120
                 3! = 3×2×1 = 6
     - Special case: 0! = 1
  
  2. COMBINATION C(n,r):
     - Formula: C(n,r) = n! / (r! × (n-r)!)
     - Purpose: Number of ways to CHOOSE r items from n items
     - Order doesn't matter: ABC = ACB = BAC (all same)
     - Example: C(5,2) = 5!/(2!×3!) = 120/(2×6) = 10
  
  3. PERMUTATION P(n,r):
     - Formula: P(n,r) = n! / (n-r)!
     - Purpose: Number of ways to ARRANGE r items from n items  
     - Order matters: ABC ≠ ACB ≠ BAC (all different)
     - Example: P(5,2) = 5!/3! = 120/6 = 20
  
  REAL WORLD EXAMPLES:
  
  Combination Examples (Order doesn't matter):
  - Choosing 3 friends from 10 to invite to dinner
  - Selecting 5 books from 20 to buy
  - Picking 2 pizza toppings from 8 available
  
  Permutation Examples (Order matters):
  - Arranging 5 people in a line for photo
  - Creating 3-digit passwords from 10 digits
  - Ranking top 3 students from a class of 30
  
  PROGRAMMING APPROACHES DEMONSTRATED:
  
  1. WITHOUT FUNCTIONS:
     ✓ Simple and straightforward
     ✗ Code repetition (factorial calculation multiple times)
     ✗ Hard to maintain and reuse
  
  2. WITH FUNCTIONS:
     ✓ Code reusability (factorial function used multiple times)
     ✓ Better organization and readability
     ✓ Easier to debug and maintain
     ✓ Follows DRY principle (Don't Repeat Yourself)
  
  KEY PROGRAMMING LESSONS:
  - Functions eliminate code duplication
  - Functions make code more organized and readable
  - Functions allow for easier testing and debugging
  - Mathematical formulas can be broken down into smaller functions
  
  SAMPLE OUTPUTS:
  For n=5, r=2:
  - Combination C(5,2) = 10 (ways to choose 2 from 5)
  - Permutation P(5,2) = 20 (ways to arrange 2 from 5)
*/