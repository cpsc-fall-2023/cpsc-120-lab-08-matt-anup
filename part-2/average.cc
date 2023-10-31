// Matthew Nakafuji
// mattnakafuji@csu.fullerton.edu
// @MattSequoia
// Partners: @anupgu16

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one argument";
    return 1;
  }

  // Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0.0};
  double value{0.0};
  bool first{true};
  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    value = std::stod(argument);
    sum = sum + value;
  }

  // After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double average{0.0};
  double length{static_cast<double>(arguments.size())};
  average = sum / (length - 1);

  // Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  std::cout << "average = " << average << "\n";

  return 0;
}
