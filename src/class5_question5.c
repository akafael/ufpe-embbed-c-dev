/**
 * Basic program that find a number inside a vector.
 */

#include <stdio.h>

int main()
{
  int numberList[] = {0, 1, 2};
  int *ptrNumber = numberList;

  printf("Starting Values:"
         " [%d %d %d]\n",
         numberList[0], numberList[1], numberList[2]);

  // Setting value using [] operator
  numberList[0] = 5;

  // Setting value using list pointer
  *(numberList + 1) = 7;

  // Setting value using variable pointer
  ptrNumber += 2;
  *ptrNumber = 11;

  printf("Values after set operations:"
         " [%d %d %d]\n",
         numberList[0], numberList[1], numberList[2]);

  return 0;
}