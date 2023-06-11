/**
 * Basic program that checks if a number is Odd or Even.
 */
#include <stdio.h>

int isEven(const int number) { return (number % 2); }

int main() {
  unsigned int number1 = 0;

  // User Input
  printf("Let's check if a number is odd or even.\n"
         "Please enter a number: ");
  scanf("%d", &number1);

  // Output
  if (isEven(number1)) {
    printf("Number %d is Even!\n", number1);
  } else {
    printf("Number %d is Odd!\n", number1);
  }

  return 0;
}