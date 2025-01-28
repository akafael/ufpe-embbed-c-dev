/**
 * Basic program that checks if the first number is greater the other 2.
 */
#include <stdio.h>

int main() {
  int number1 = 0;
  int number2 = 0;

  // User Input
  printf("Let's check which value has the greatest address.\n"
         "Please enter 2 numbers: ");
  scanf("%d %d", &number1, &number2);

  // Compare address and print the variable withe highest address
  if (&number2 > &number1) {
    printf("number2 = %d\n",number2);
  } else {
    printf("number1 = %d\n",number1);
  }

  return 0;
}