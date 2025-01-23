/**
 * Basic program to evaluate the sum of 4 numbers
 */
#include <stdio.h>

int main() {
    int sumValues = 0;
    int values[4] = {0,0,0,0};

    printf("Inform 4 numbers:\n");
    scanf("%d %d %d %d",&values[0],&values[1],&values[2],&values[3]);

    sumValues = values[0] + values[1] + values[2] + values[3]; 

    printf("The sum of all values is %d\n",sumValues);
}