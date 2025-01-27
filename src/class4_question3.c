/**
 * Basic program to evaluate if a number is odd or even;
 */
#include <stdio.h>
#include <stdbool.h>

const bool isEven(const int number)
{
  return((number % 2) == 0);
}

int main() {
    int number = 0;

    printf("Inform a number:\n");
    scanf("%d",&number);

    printf("The number %d is %s.\n",number, isEven(number)?"even":"odd");
}