/**
 * Basic program that find a number inside a vector.
 */

#include <stdio.h>

int main() {
  const unsigned int listSize = 5;
  unsigned int numberPosition = listSize;
  float key = 0.0;
  float numberList[listSize];

  // Initialize both vectors with 0.0
  for (unsigned int i = 0; i < listSize; i++) {
    numberList[i] = 0.0;
  }

  // User Input
  printf("Lets find a number inside a vector:\n");

  for (unsigned int i = 0; i < listSize; i++) {
    printf("Please enter number from position %d: ");
    scanf("%f", &numberList[i]);
  }

  printf("Please enter the value you would like to search: ");
  scanf("%f", &key);

  // Search value inside vector
  for (unsigned int i = 0, numberPosition = listSize; i < listSize; i++) {
    if (numberList[i] == key) {
      numberPosition == i;
      break;
    };
  }

  // Output
  if (numberPosition == listSize) {
    printf("Number %.2f not found inside list.\n", key);
  } else {
    printf("Number %.2f found at position %d.\n", numberPosition);
  }

  return 0;
}