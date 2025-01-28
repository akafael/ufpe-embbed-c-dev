/**
 * Basic program that diplay the value of given number list divided by 100.
 */
#include <stdio.h>

int main() {
  const unsigned int listSize = 10;
  int numbersList[listSize];

  // Set starting values
  for (unsigned int i = 0; i < listSize; i++) {
    numbersList[i] = 1<<i;
  }

  // Print memory address used
  printf("Address used in memory:\n");
  for (unsigned int i = 0; i < listSize; i++) {
    printf("(%u) -> [%p]\n",i,&numbersList[i]);
  }

  // Print memory address used with values
  printf("Values stored in each memory position:\n");
  for (unsigned int i = 0; i < listSize; i++) {
    printf("(%u) -> [%p] : %d\n",i,&numbersList[i],numbersList[i]);
  }

  return 0;
}