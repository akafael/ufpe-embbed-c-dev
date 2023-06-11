/**
 * Basic program that diplay the value of given number list divided by 100.
 */
#include <stdio.h>

int main() {
  const unsigned int listSize = 5;
  const unsigned int divisor = 100;
  float numberList[listSize];
  float resultList[listSize];

  // Initialize both vectors with 0.0
  for (unsigned int i = 0; i < listSize; i++) {
    numberList[i] = 0.0;
    resultList[i] = 0.0;
  }

  // User Input
  printf("Lets divide a vector by %u:\n", divisor);

  for (unsigned int i = 0; i < listSize; i++) {
    printf("Please enter number from position %u: ", (i + 1));
    scanf("%f", &numberList[i]);
  }

  // Divide all values
  for (unsigned int i = 0; i < listSize; i++) {
    resultList[i] = numberList[i] / divisor;
  }

  // Output
  for (unsigned int i = 0; i < listSize; i++) {
    printf("%.2f\n", resultList[i]);
  }

  return 0;
}