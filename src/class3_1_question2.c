/**
 * Basic program to evaluate with number is greater given 2 numbers
 */
#include <stdio.h>

int main() {
    int numbers[3] = {0,0,0};

    printf("Inform 3 numbers:\n");
    scanf("%d %d %d",&numbers[0],&numbers[1],&numbers[2]);

    if(  ( numbers[0] > numbers[1] ) && ( numbers[0] > numbers[2] ) ){
        printf("Numbers condition satisfied!");
    }
    else
    {
        printf("Error");
    }
}