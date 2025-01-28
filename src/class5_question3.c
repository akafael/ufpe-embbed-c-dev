/**
 * Basic program that checks if the first number is greater the other 2.
 */
#include <stdio.h>

void swap(int *left, int *right){
  int temp = *left;
  *left = *right;
  *right = temp;
}

int main() {
  int number1 = 0;
  int number2 = 0;

  // User Input
  printf("Let's check which value has the greatest address.\n"
         "Please enter 2 numbers: ");
  scanf("%d %d", &number1, &number2);


  printf("Values before swap:\n");
  printf("\tnumber1: %d, number2: %d\n",number1,number2);

  swap(&number1,&number2);

  printf("Values after swap:\n");
  printf("\tnumber1: %d, number2: %d\n",number1,number2);

  return 0;
}