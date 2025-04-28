#include <iostream> // Include the input/output stream library

int main()
{
  // === UNDERSTANDING THE CONST KEYWORD ===
  // The const keyword in C++ is used to declare variables whose values cannot be changed after initialization.
  // It is a way to create read-only variables, which can help prevent accidental changes to data and improve code safety.
  // By convention, constant variables are often named in ALL_CAPS to distinguish them from regular variables

  // Example of a const variable (commented out to demonstrate the concept)
  // const int a = 10;  // 'a' is a constant variable, its value cannot be changed
  // a = 20;            // Error: cannot assign to variable 'a' with const-qualified type 'const int'
  // std::cout << a << std::endl; // This would output 10 if the error was fixed

  // === PRACTICAL EXAMPLE: MATHEMATICAL CONSTANTS ===
  // PI is a well-known mathematical constant that should never change
  const double PI = 3.14159; // Declaring PI as const prevents accidental modification
  // PI = 3.14;               // Error: cannot assign to variable 'PI' with const-qualified type 'const double'

  // Regular (non-const) variables can be changed as needed
  double radius = 5; // Initial value
  radius = 10;       // radius is not constant, so its value can be changed

  // Using const variables in calculations
  double circumference = 2 * PI * radius; // Calculate the circumference of a circle (2πr)

  // Display the result with units
  std::cout << circumference << "cm" << std::endl; // Output: 62.8318cm
  // Note: The value of PI remains unchanged throughout the program because of the const qualifier

  // === MORE CONST EXAMPLES ===
  // Constants are often used for physical or system constants that should not be altered
  const int LIGHT_SPEED = 299792458; // Speed of light in meters per second (universal constant)
  const int HEIGHT = 100;            // Height in meters (application-specific constant)

  // Output the constant values for display
  std::cout << "The speed of light is " << LIGHT_SPEED << " m/s." << std::endl;
  std::cout << "The height is " << HEIGHT << " meters." << std::endl;

  // === BENEFITS OF USING CONST ===
  // 1. Prevents accidental modification of values
  // 2. Makes code more readable and self-documenting
  // 3. Allows compiler optimization
  // 4. Communicates intent to other programmers

  return 0; // Program executed successfully
}