/**
 * Basic program to the numbers between 1 and 10
 */
#include <stdio.h>

/**
 * @brief Function that summ all number between two given numbers
 *
 * @param start Start number
 * @param end  End number
 * @return int
 */
void printOdds(const int start, const int end)
{
    printf("The following numbers between %d and %d are odds: ",start,end);

    for (int i = start; i <= end; i++)
    {
        if(i % 2 == 1){
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main()
{
    unsigned int numberStart = 0;
    unsigned int numberEnd = 0;

    printf("Let's print a sequence. Please enter the target start an the target end numbers: ");
    scanf("%u %u", &numberStart, &numberEnd);

    printOdds(numberStart, numberEnd);
}