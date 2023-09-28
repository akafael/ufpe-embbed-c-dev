/**
 * program to evaluate if a given number is prime
 */
#include <stdio.h>
#include <stdbool.h>
#include <math.h>


/**
 * @brief Very basic program to evaluate if a given number is prime
 * 
 * Check all numbers between 2 and sn
 * 
 * @param number 
 * @return int 
 */
int isPrime(const int number) {
  for(int i = 2; i < number; i++)
  {
    if( number % i == 0)
    {
        return false;
    }
  }

  return true;
}

int main() {
    unsigned int number;
    printf("Type a number: ");
    scanf("%u",&number);
    printf("The number %u is %s.\n",number,(isPrime(number)? "prime":"not prime"));
}