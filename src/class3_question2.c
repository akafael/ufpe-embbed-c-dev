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
void printAllBut(const int start, const int end)
{

    if (start < end)
    {
        for (int i = start + 1; i < end; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = end + 1; i < start; i++)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int numberStart = 0;
    int numberEnd = 0;

    printf("Let's print a sequence. Please enter the target start an the target end numbers: ");
    scanf("%d %d", &numberStart, &numberEnd);

    printAllBut(numberStart, numberEnd);
}