#include <iostream>
#include <vector>

// TYPEDEF EXAMPLES:
// typedef is used to create aliases (alternative names) for existing data types
// Syntax: typedef existing_type new_type_name;

// Example 1: Creating an alias for a complex type
typedef std::vector<std::pair<std::string, int>> pairlist_t; // Create an alias for a vector of pairs

// Example 2: Simple type aliases
typedef std::string string_t; // Create an alias for std::string
typedef int number_t;         // Create an alias for int

// Example 3: Function pointer typedef
typedef void (*FunctionPtr)(int, int); // Create an alias for a function pointer type

// Example 4: Array typedef
typedef int IntArray[10];     // Create an alias for an array of 10 integers

// Example 5: Pointer typedef
typedef int* IntPtr;          // Create an alias for an integer pointer

int main()
{
  // typedef = reserved keyword in C++ used to create an alias for a data type.
  //           New identifier for an existing type.
  //           Helps improve code readability and maintainability.
  //           Especially useful for complex data types or for code portability.

  // Basic typedef usage examples:
  string_t name = "Junni"; // Using the string alias to declare a variable
  number_t age = 19;       // Using the int alias to declare a variable

  std::cout << "Name: " << name << std::endl; // Output: Name: Junni
  std::cout << "Age: " << age << std::endl;
  
  // Example with complex type
  pairlist_t studentScores; // Using the alias for a vector of string-int pairs
  studentScores.push_back({"John", 95});
  studentScores.push_back({"Alice", 87});
  std::cout << "\nStudent scores:" << std::endl;
  for(const auto& student : studentScores) {
    std::cout << student.first << ": " << student.second << std::endl;
  }
  
  // Example with array typedef
  IntArray numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::cout << "\nArray elements:" << std::endl;
  for(int i = 0; i < 10; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl;
  
  // Example with pointer typedef
  int value = 42;
  IntPtr ptr = &value;
  std::cout << "\nValue via pointer: " << *ptr << std::endl;

  return 0;
}