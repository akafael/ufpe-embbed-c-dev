/**
 * Basic sample - using pointer to set values
 */
#include <stdio.h>

int main() {
  char var_char = 'c';
  int var_int = 0;
  float var_float = 0.5;

  char *ptr_var_char = &var_char;
  int *ptr_var_int = &var_int;
  float *ptr_var_float = &var_float;

  printf("Start Values:");
  printf("\n\tchar: %c",var_char);
  printf("\n\tint: %d",var_int);
  printf("\n\tfloat: %.2f",var_float);

  *ptr_var_char = '*';
  *ptr_var_int = '*';
  *ptr_var_float = '*';

  printf("\nValues after update:");
  printf("\n\tchar: %c",var_char);
  printf("\n\tint: %d",var_int);
  printf("\n\tfloat: %.2f",var_float);
  printf("\n");

  return 0;
}