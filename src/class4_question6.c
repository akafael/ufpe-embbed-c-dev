/**
 * Deck shuffle: merge two vectors intercalating values
 */
#include <stdio.h>

int main()
{
    const int sizeVector = 4;
    const int numberOfVectors = 2;
    int vec[numberOfVectors][sizeVector];
    int vec_result[sizeVector*numberOfVectors];

    // Set all values to 0
    for (int j = 0; j < numberOfVectors; j++)
    {
        for (int i = 0; i < sizeVector; i++)
        {
            vec[j][i] = 0;
        }
    }

    // Read data for each vector
    for (int j = 0; j < numberOfVectors; j++)
    {
        printf("Insert data for vec%d:\n", j);
        for (int i = 0; i < sizeVector; i++)
        {
            printf("Insert the data for vet%d[%d]: ", j, i);
            scanf("%u", &(vec[j][i]));
        }
    }

    // Generate and print vector result
    printf("The vector result is:\n ");
    for(int i = 0; i < sizeVector; i++)
    {
        for (int j = 0; j < numberOfVectors; j++)
        {
            {
                vec_result[numberOfVectors*i+j] = vec[j][i];
                printf(" %d",vec_result[numberOfVectors*i+j]);
            }
        }
    }
    printf("\n");
}