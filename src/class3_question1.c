/**
 * Basic program to evaluate the sum of all number between 1 and 10
 */
#include <stdio.h>

/**
 * @brief Function that summ all number between two given numbers
 * 
 * @param start Start number
 * @param end  End number
 * @return int 
 */
int sumAll(const int start, const int end) {
  int sum = 0;
  for(int i = start; i <= end; i++)
  {
    sum += i;
  }
  return sum;
}

int main() {
    printf("The sum of all values between %d and %d is %d\n",1,10,sumAll(1,10));
}