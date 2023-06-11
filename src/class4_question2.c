/**
 * Basic program that checks if the first number is greater the other 2.
 */
#include <stdio.h>

int isFirstGreater(const unsigned int a, const unsigned int b,
                   const unsigned int c) {
  if ((a > b) && (a > c)) {
    return 0;
  }

  return 1;
}

int main() {
  unsigned int number1 = 0;
  unsigned int number2 = 0;
  unsigned int number3 = 0;

  // User Input
  printf("Let's check if the first number is the greatest one.\n"
         "Please enter 3 numbers: ");
  scanf("%d %d %d", &number1, &number2, &number3);

  // Output
  if (isFirstGreater(number1, number2, number3)) {
    printf("Condition Satisfied!\n");
  } else {
    printf("Error\n");
  }

  return 0;
}