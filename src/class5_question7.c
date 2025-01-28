/**
 * Basic program that find a number inside a vector.
 */

#include <stdio.h>

void getMinMaxVector(int * const vector, const unsigned int size, int *max, int *min)
{
    *min = *vector;
    *max = *vector;

    for(int * vectorPtr = vector; vectorPtr < (vector + size); vectorPtr++)
    {
        (*min) = ((*min) < (*vectorPtr))? (*vectorPtr) : (*min);
        (*max) = ((*max) > (*vectorPtr))? (*vectorPtr) : (*max);
    }
}

int main()
{
  const unsigned int sizeList = 5;
  int numberList[sizeList];
  int min = 0;
  int max = 0;

  printf("Let's find the min and max values inside a list:\n");
  printf("Enter %d values:\n ",sizeList);

  for(int *deltaPtr = numberList; deltaPtr < (numberList + sizeList); deltaPtr++)
  {
    scanf("%d",deltaPtr);
  }

  getMinMaxVector(numberList,sizeList,&min,&max);

  printf("> min: %d, max: %d\n",min,max);

  return 0;
}