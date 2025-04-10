#include <iostream> // Include the input/output stream library

int main()
{
  // === VARIABLE BASICS ===
  // these are the simple examples of variable declaration, assignment, and initialization
  int a;         // Declare an integer variable 'a' -declaration
  a = 5;         // Assign the value 5 to 'a' -assignment
  int b = 6;     // Declare and initialize an integer variable 'b' -declaration and initialization
  int c = a + b; // Declare and initialize an integer variable 'c' with the sum of 'a' and 'b'

  // Output basic variable values
  std::cout << a << '\n';      // Output the value of 'a'
  std::cout << b << '\n';      // Output the value of 'b'
  std::cout << c << std::endl; // Output the value of 'c' with endl to flush the buffer

  // === INTEGER TYPE ===
  // Integer type stores whole numbers without decimal points (4 bytes in size)
  int age = 19;
  int height = 170.5; // Note: decimal part is truncated to 170
  int year = 2025;
  int days = 365;

  // Display integer values
  std::cout << age << std::endl;    // Prints 19
  std::cout << height << std::endl; // Prints 170 (truncated)
  std::cout << year << std::endl;   // Prints 2025
  std::cout << days << std::endl;   // Prints 365

  // === DOUBLE TYPE ===
  // Double type stores floating point numbers with decimal precision (8 bytes in size)
  double height2 = 170.5; // Stores exact value with decimal
  double pi = 3.14159;    // Mathematical constant pi
  double weight = 65.5;   // Weight in kg with decimal precision

  // Display double values
  std::cout << height2 << std::endl; // Prints 170.5
  std::cout << pi << std::endl;      // Prints 3.14159
  std::cout << weight << std::endl;  // Prints 65.5

  // === CHARACTER TYPE ===
  // Char type stores single characters (1 byte in size)
  char initial = 'A';       // Single character with single quotes
  char letter = 'B';        // Another character
  char symbol = '#';        // Symbol character
  char number = '1';        // Character '1', not integer 1
  char doubleletter = 'AA'; // ERROR: Multi-character constant - compiler warning

  // Display character values
  std::cout << initial << std::endl;      // Prints A
  std::cout << letter << std::endl;       // Prints B
  std::cout << symbol << std::endl;       // Prints #
  std::cout << number << std::endl;       // Prints 1 (as character)
  std::cout << doubleletter << std::endl; // WARNING: Implementation-defined behavior

  // === BOOLEAN TYPE ===
  // Boolean type stores true/false values (1 byte in size)
  bool student = true;  // Boolean true value
  bool isFalse = false; // Boolean false value

  // Display boolean values (prints as integers)
  std::cout << student << std::endl; // Prints 1 (representing true)
  std::cout << isFalse << std::endl; // Prints 0 (representing false)

  // === STRING TYPE ===
  // String type represents sequences of characters (24 bytes for object itself)
  std::string name = "John Doe"; // String with double quotes
  std::string day = "friday";    // Day of the week
  std::string month = "january"; // Month name
  std::string food = "pizza";    // Food name
  std::string number2 = "123";   // String of digits, not an integer

  // Display string values
  std::cout << name << std::endl;    // Prints "John Doe"
  std::cout << day << std::endl;     // Prints "friday"
  std::cout << month << std::endl;   // Prints "january"
  std::cout << food << std::endl;    // Prints "pizza"
  std::cout << number2 << std::endl; // Prints "123"

  // === COMBINING TEXT AND VARIABLES ===
  // Demonstrating string concatenation with variables
  std::cout << "Hello " << name << std::endl;             // Combines text with string variable
  std::cout << "Your age is " << age << std::endl;        // Combines text with integer variable
  std::cout << "Your height is " << height2 << std::endl; // Combines text with double variable

  return 0; // Program executed successfully
}