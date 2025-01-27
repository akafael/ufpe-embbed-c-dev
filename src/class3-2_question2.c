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
void printAllNumberBetween(const int start, const int end)
{
    const int isStartLower = (start < end);
    const int first = (isStartLower)?start:end;
    const int last = (isStartLower)?end:start;

    for (int i = first + 1; i < last; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int numberStart = 0;
    int numberEnd = 0;

    printf("Let's print a sequence. Please enter the target start an the target end numbers: ");
    scanf("%d %d", &numberStart, &numberEnd);

    printAllNumberBetween(numberStart, numberEnd);
}