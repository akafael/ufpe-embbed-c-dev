/**
 * Basic program that find a number inside a vector.
 */

#include <stdio.h>

int main()
{
  const unsigned int sizeList = 5;
  int numberList[sizeList];
  int *ptrNumber = numberList;

  printf("Enter %d values:\n ",sizeList);

  for(int *deltaPtr = numberList; deltaPtr < (numberList + sizeList); deltaPtr++)
  {
    scanf("%d",deltaPtr);
  }

  printf("The double of the input values are:\n");
  for(int *deltaPtr = numberList; deltaPtr < (numberList + sizeList); deltaPtr++)
  {
    *deltaPtr = (*deltaPtr) << 1;

    printf(" %d",*deltaPtr);
  }
  printf("\n");

  return 0;
}