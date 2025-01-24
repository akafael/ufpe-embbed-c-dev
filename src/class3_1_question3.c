/**
 * Basic program to evaluate with number is greater given 2 numbers
 */
#include <stdio.h>

int main() {
    int numbers[1] = {0};

    printf("Inform 1 numbers:\n");
    scanf("%d",&numbers[0]);

    if( (numbers[0] % 2) == 0 ){
        printf("The number %d is even.\n",numbers[0]);
    }
    else
    {
        printf("The number %d is odd.\n",numbers[0]);
    }
}