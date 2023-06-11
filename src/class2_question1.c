/**
 * Basic program to compare two numbers and display the biggest one.
 */
#include <stdio.h>

unsigned int max(const unsigned int a, const unsigned int b) {
  return (a > b) ? a : b;
}

int main() {
  unsigned int number1 = 0;
  unsigned int number2 = 0;

  // User Input
  printf("Let's compare numbers. Please enter 2 numbers: ");
  scanf("%d %d", &number1, &number2);

  // Output
  if (number1 == number2) {
    printf("Both numbers are equal ( %d = %d )", number1, number2);
  } else {
    printf("The biggest number is %d", max(number1, number2));
  }

  return 0;
}