#include <iostream>
using namespace std;

/*
  This file demonstrates POINTERS and the DEREFERENCE OPERATOR in C++

  KEY CONCEPTS:
  1. POINTER: A variable that stores the memory address of another variable
  2. ADDRESS-OF OPERATOR (&): Gets the memory address of a variable
  3. DEREFERENCE OPERATOR (*): Accesses the value stored at a memory address

  POINTER SYNTAX:
  - Declaration: int *p;  (p is a pointer to an integer)
  - Assignment: p = &x;   (p now points to x's memory address)
  - Dereferencing: *p     (gets the value stored at address p points to)

  MEMORY VISUALIZATION:
  Variable x: [Value: 50] stored at address (e.g., 0x1000)
  Pointer p:  [Address: 0x1000] (points to where x is stored)
*/

int main()
{
  // Step 1: Create a regular integer variable
  int x = 50; // x stores the value 50 in memory

  // Step 2: Declare a pointer variable
  // int* means "pointer to integer"
  // *p means p is a pointer that can point to integer variables
  int *p;

  // Step 3: Make the pointer point to variable x
  // &x gets the memory address where x is stored
  // p = &x means "store x's address in pointer p"
  p = &x;

  cout << "=== POINTER AND DEREFERENCE DEMONSTRATION ===" << endl
       << endl;

  // Step 4: Display different pointer-related values

  // &x: Address-of operator - shows WHERE x is stored in memory
  cout << "Address of x (&x): " << &x << endl;

  // p: Shows the address stored IN the pointer (same as &x)
  cout << "Value of p (address it points to): " << p << endl;

  // x: Shows the actual VALUE stored in variable x
  cout << "Value of x: " << x << endl;

  // *p: DEREFERENCE operator - goes to the address stored in p and gets the value there
  cout << "Value at address p points to (*p): " << *p << endl;

  cout << endl
       << "=== ADDITIONAL DEREFERENCE EXAMPLES ===" << endl
       << endl;

  // Example 1: Modifying value through dereference operator
  cout << "Before modification:" << endl;
  cout << "x = " << x << ", *p = " << *p << endl;

  // Using dereference operator to change the value
  *p = 100; // This changes the value at the address p points to (which is x)

  cout << "After *p = 100:" << endl;
  cout << "x = " << x << ", *p = " << *p << endl;
  cout << "Notice: Both x and *p changed because they refer to the same memory location!" << endl
       << endl;

  // Example 2: Multiple pointers to same variable
  int *q = &x; // Another pointer pointing to the same variable x

  cout << "Multiple pointers to same variable:" << endl;
  cout << "Address in p: " << p << endl;
  cout << "Address in q: " << q << endl;
  cout << "Value via *p: " << *p << endl;
  cout << "Value via *q: " << *q << endl;
  cout << "All point to the same memory location!" << endl
       << endl;

  // Example 3: Pointer arithmetic and dereference
  int arr[3] = {10, 20, 30};
  int *ptr = arr; // Points to first element of array

  cout << "Array and pointer arithmetic with dereference:" << endl;
  cout << "*ptr (first element): " << *ptr << endl;            // Dereference: gets arr[0]
  cout << "*(ptr+1) (second element): " << *(ptr + 1) << endl; // Dereference: gets arr[1]
  cout << "*(ptr+2) (third element): " << *(ptr + 2) << endl;  // Dereference: gets arr[2]

  return 0;
}

/*
  ==================== COMPREHENSIVE DEREFERENCE OPERATOR GUIDE ====================

  THE DEREFERENCE OPERATOR (*):

  1. WHAT IT DOES:
     - Takes a memory address (stored in a pointer)
     - Goes to that memory location
     - Retrieves the VALUE stored at that location

  2. SYNTAX:
     - *pointer_name
     - Example: *p (gets value at address stored in p)

  3. TWO CONTEXTS OF ASTERISK (*):

     a) DECLARATION: int *p;
        - Here * means "p is a pointer to int"
        - * is part of the type declaration

     b) DEREFERENCE: *p = 100;
        - Here * means "go to address in p and access the value"
        - * is the dereference operator

  4. STEP-BY-STEP DEREFERENCE PROCESS:

     Given: int x = 50; int *p = &x;

     Step 1: p contains address of x (e.g., 0x1000)
     Step 2: *p tells compiler "go to address 0x1000"
     Step 3: Retrieve the value stored at 0x1000 (which is 50)
     Step 4: Return that value

  5. DEREFERENCE vs ADDRESS-OF:

     - &variable: Gets the ADDRESS where variable is stored
     - *pointer:  Gets the VALUE at the address stored in pointer

     They are OPPOSITE operations:
     - & takes value → gives address
     - * takes address → gives value

  6. PRACTICAL USES:

     a) Reading values: int value = *ptr;
     b) Writing values: *ptr = 200;
     c) Function parameters: void func(int *ptr) { *ptr = 100; }
     d) Dynamic memory: int *ptr = new int(50); *ptr = 100;

  7. COMMON MISTAKES:

     ❌ int *p; *p = 50;           // p doesn't point anywhere valid!
     ✅ int x; int *p = &x; *p = 50; // p points to x, then set x = 50

     ❌ int *p = 50;              // Trying to assign value instead of address
     ✅ int x = 50; int *p = &x;   // Assign address of x to p

  8. MEMORY ANALOGY:

     Think of memory like a street with houses:
     - Variable x is like a house with address "123 Main St"
     - Pointer p is like a piece of paper with "123 Main St" written on it
     - Dereference (*p) is like going to the address and looking inside the house

  EXPECTED OUTPUT OF THIS PROGRAM:

  Address of x (&x): 0x... (some memory address)
  Value of p (address it points to): 0x... (same address as above)
  Value of x: 50
  Value at address p points to (*p): 50

  After *p = 100:
  x = 100, *p = 100 (both changed because they refer to same memory)
*/