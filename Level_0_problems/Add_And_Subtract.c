#include <stdio.h>

int main() {
  // Declare variables to store the two numbers and the result
  float num1, num2, sum, sub;

  // Prompt the user to enter two numbers
  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);

  // Check if the input is an integer
  if (num1 == (int)num1 && num2 == (int)num2) {
    // If the input is an integer, cast the result to an integer
    sum = (int)(num1 + num2);
    sub = (int)(num1 - num2);
  } else {
    // If the input is a float, keep the result as a float
    sum = num1 + num2;
    sub = num1 - num2;
  }

  // Print the result to the console
  printf("The sum of the two numbers is %.2f\n", sum);
  printf("The subtraction of the two numbers is %.2f\n", sub);

  return 0;
}

