/**
 * Basic program to evaluate with number is greater given 2 numbers
 */
#include <stdio.h>

int main() {
    int numbers[2] = {0,0};

    printf("Inform 2 numbers:\n");
    scanf("%d %d",&numbers[0],&numbers[1]);

    if( numbers[0] == numbers[1] ){
        printf("Both numbers are equal to %d\n",numbers[0]);
    }
    else if( numbers[0] > numbers[1] )
    {
        printf("The bigger value is %d\n",numbers[0]);
    }
    else if ( numbers[0] < numbers[1] )
    {
        printf("The bigger value is %d\n",numbers[1]);
    }
}