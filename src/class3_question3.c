/**
 * Count the number of positive values from given numeric list
 */
#include <stdio.h>

/**
 * @brief Count the number of positive values from given numeric list
 * 
 * @param [in] list Numeric List
 * @param [in] sizeList  List Size
 * @return int 
 */
unsigned int countPositives(const int * list, const int sizeList) {
  unsigned int count = 0;
  for(int i = 0; (i <= sizeList) && list[i] != 0; i++)
  {
    count = (list[i] > 0) ? count + 1: count; 
  }
  return count;
}


int main() {

    const int maxListSize = 100;
    int listSize = 0;
    int list[maxListSize];

    for(int i = 0; (i <= maxListSize); i++, ++listSize)
    {
        printf("Insert a number (or type 0 to finish list): ");
        scanf("%d",&list[i]);

        if(list[i] == 0)
        {
            break;
        }
    }

    printf("There are %u positives numbers.\n",countPositives(list,listSize));
}