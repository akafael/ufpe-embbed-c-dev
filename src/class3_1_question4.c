/**
 * Basic program to evaluate with number is greater given 2 numbers
 */
#include <stdio.h>

int main() {
    int numbers[2] = {0,0};

    printf("Inform 2 numbers:\n");
    scanf("%d %d",&numbers[0],&numbers[1]);

    if( numbers[0] == numbers[1] ){
        printf("> The product of %d and %d is %d\n",numbers[0],numbers[1],numbers[0]*numbers[1]);
    }
    else if( numbers[0] > numbers[1] )
    {
        printf("> The diference of %d and %d is %d\n",numbers[0],numbers[1],numbers[0]-numbers[1]);
    }
    else if ( numbers[0] < numbers[1] )
    {
        printf("> The sum of %d and %d is %d\n",numbers[0],numbers[1],numbers[0]+numbers[1]);
    }
}