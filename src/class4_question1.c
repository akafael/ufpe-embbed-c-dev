/**
 * Basic program to compare two numbers and display the biggest one.
 */
#include <stdio.h>

unsigned int max(const unsigned int a, const unsigned int b) {
  return (a > b) ? a : b;
}

int main() {
  unsigned int numbers[2] = {0,0};

  // User Input
  printf("Let's compare numbers. Please enter 2 numbers: ");
  scanf("%u %u", &numbers[0], &numbers[1]);

  // Output
  if (numbers[0] == numbers[1]) {
    printf("Both numbers are equal ( %u = %u )", numbers[0], numbers[1]);
  } else {
    printf("The biggest number is %u", max(numbers[0], numbers[1]));
  }

  return 0;
}