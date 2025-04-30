/*
Variable Naming rules in C++
1. Variable names must begin with a letter (a-z, A-Z) or an underscore (_).
2. Variable names can contain letters, numbers (0-9), and underscores.
3. Variable names are case-sensitive.
4. Reserved keywords cannot be used as variable names.
5. Variable names should be descriptive and convey meaning.
6. Variable names should not be too long or too short.
7. Avoid using special characters (e.g., @, #, $, %, etc.) in variable names.
*/

#include <iostream>
using namespace std;

int main()
{
  // Examples of valid variable names
  int age;          // Valid: Begins with a letter
  double _salary;   // Valid: Begins with an underscore
  string firstName; // Valid: Camel case naming convention
  int user_id;      // Valid: Snake case naming convention
  bool isActive;    // Valid: Descriptive name

  // Examples of invalid variable names (these would cause compiler errors)
  // int 1stPlace;        // Invalid: Begins with a number
  // float user-score;    // Invalid: Contains a hyphen
  // char @symbol;        // Invalid: Contains a special character
  // int class;           // Invalid: 'class' is a reserved keyword

  // Example of case-sensitivity
  int Score = 100;
  int score = 50; // Different from 'Score' - these are two separate variables

  cout << "Score: " << Score << endl;
  cout << "score: " << score << endl;

  // Examples of good descriptive names
  int studentCount = 25;
  double hourlyWage = 15.50;
  bool hasCompletedCourse = true;

  // Examples of poor naming practices
  int x = 25;                                                 // Too short, not descriptive
  int thisIsAnExtremelyLongVariableNameThatIsHardToRead = 10; // Too long

  return 0;
}