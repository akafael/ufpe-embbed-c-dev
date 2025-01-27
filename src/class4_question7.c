/**
 * Read vector and split in two
 */
#include <stdio.h>

int main()
{
    const int sizeVector = 8;

    int vectorInput[sizeVector];
    int vectorNegative[sizeVector];
    int vectorPositive[sizeVector];
    int countNegative = 0;
    int countPositive = 0;

    // Set all values to 0
    for (int i = 0; i < sizeVector; i++)
    {
        vectorInput[i] = 0;
        vectorNegative[i] = 0;
        vectorPositive[i] = 0;
    }

    // Read data
    printf("Insert data for vector:\n");
    for (int i = 0; i < sizeVector; i++)
    {
        printf("Insert the data for vec[%d]: ", i);
        scanf("%u", &(vectorInput[i]));

        if (vectorInput[i] < 0)
        {
            vectorNegative[countNegative++] = vectorInput[i];
        }

        if (vectorInput[i] > 0)
        {
            vectorPositive[countPositive++] = vectorInput[i];
        }
    }

    // Generate and print vector result
    printf("\nThe negative numbers are:\n ");
    for (int i = 0; (i < countNegative) && (i < sizeVector); i++)
    {
        printf(" %d", vectorNegative[i]);
    }

    printf("\nThe positive numbers are:\n ");
    for (int i = 0; (i < countPositive) && (i < sizeVector); i++)
    {
        printf(" %d", vectorPositive[i]);
    }

    printf("\n");
}