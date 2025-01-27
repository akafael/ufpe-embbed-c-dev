/**
 * Basic program that find a number inside a vector.
 */

#include <stdio.h>

int main()
{
  const unsigned int listSize = 3;
  unsigned int numberPosition = listSize;
  int key = 0;
  int numberList[listSize];

  // Initialize both vectors with 0
  for (unsigned int i = 0; i < listSize; i++)
  {
    numberList[i] = 0;
  }

  // User Input
  printf("Lets find a number inside a vector:\n");

  for (unsigned int i = 0; i < listSize; i++)
  {
    printf("Please enter number from position %u: ", (i + 1));
    scanf("%d", &numberList[i]);
  }

  printf("Please enter the value you would like to search: ");
  scanf("%d", &key);

  // Search value inside vector
  for (unsigned int i = 0; i < listSize; i++)
  {
    if (numberList[i] == key)
    {
      numberPosition == i;
      break;
    };
  }

  // Output
  if(numberPosition == listSize)
  {
    printf("Number %d not found inside list.\n", key);
  }
  else
  {
    printf("Number %d found at position %u.\n", key, numberPosition + 1);
  }

  return 0;
}