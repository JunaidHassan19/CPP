#include <iostream>

/**
 * NAMESPACES IN C++
 * -----------------
 * Namespaces are a feature of C++ that helps prevent naming conflicts by creating
 * isolated scopes for identifiers (variables, functions, classes, etc.).
 * They're especially useful in large projects with multiple libraries.
 */

// First namespace containing variable x with value 1
namespace first
{
  int x = 1;
  void print() { std::cout << "Inside first namespace" << std::endl; }
}

// Second namespace containing variable x with the same name but value 2
namespace second
{
  int x = 2;
  void print() { std::cout << "Inside second namespace" << std::endl; }
}

// Example of a nested namespace
namespace outer
{
  int outer_val = 100;

  namespace inner
  {
    int inner_val = 200;
  }
}

// Creating an alias for a long namespace name
namespace math = outer::inner;

int main()
{
  // NAMESPACE BASICS
  // ---------------
  // Namespace = provides a solution for preventing name conflicts in large projects.
  //             Each entity needs a unique name within its scope.
  //             Namespaces allow for identically named entities
  //             as long as the namespaces are different.

  // Example of a naming conflict (commented out)
  // int x = 0;
  // int x = 1; // ERROR: redeclaration of 'x' in the same scope

  // ACCESSING NAMESPACE MEMBERS
  // --------------------------
  // Method 1: Direct access using scope resolution operator (::)
  std::cout << "Direct access: first::x = " << first::x << std::endl;   // Output: 1
  std::cout << "Direct access: second::x = " << second::x << std::endl; // Output: 2

  // Method 2: Using 'using directive' to import an entire namespace
  using namespace first;                                              // Makes all members of 'first' directly accessible
  std::cout << "After using first namespace: x = " << x << std::endl; // Output: 1

  // Even after 'using namespace first', we can still access second::x with scope resolution
  std::cout << "Still accessing second::x = " << second::x << std::endl; // Output: 2

  // EXAMPLE 1: USING NAMESPACE FUNCTIONS
  // ----------------------------------
  first::print();  // Output: Inside first namespace
  second::print(); // Output: Inside second namespace

  // EXAMPLE 2: NESTED NAMESPACES
  // --------------------------
  std::cout << "outer::outer_val = " << outer::outer_val << std::endl;               // Output: 100
  std::cout << "outer::inner::inner_val = " << outer::inner::inner_val << std::endl; // Output: 200

  // EXAMPLE 3: NAMESPACE ALIASES
  // --------------------------
  // Using the alias 'math' instead of 'outer::inner'
  std::cout << "math::inner_val = " << math::inner_val << std::endl; // Output: 200

  // EXAMPLE 4: SELECTIVE IMPORTS
  // --------------------------
  // We can also selectively import specific members from a namespace
  using std::cout;
  using std::endl;

  // Now we can use cout and endl without std:: prefix
  cout << "Using selective imports" << endl;

  return 0;
}