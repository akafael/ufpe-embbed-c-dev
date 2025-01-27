/**
 * Basic program to evaluate with number is greater given 2 numbers
 */
#include <stdio.h>
#include <stdbool.h>

const bool isFirstGreater(const int first, const int second, const int third){
    return (( first > second ) && ( first > third ));
}

int main() {
    int numbers[3] = {0,0,0};

    printf("Inform 3 numbers:\n");
    scanf("%d %d %d",&numbers[0],&numbers[1],&numbers[2]);

    if( isFirstGreater(numbers[0], numbers[1], numbers[2] ) ){
        printf("Numbers condition satisfied!\n");
    }
    else
    {
        printf("Error!\n");
    }
}