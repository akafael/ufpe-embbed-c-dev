#include <math.h>
#include <stdio.h>

int main() {
    int base = 0;
    int power = 0;
    int power_number = 0;

    printf("Inform the base number:\n");
    scanf("%d",&base);

    printf("Inform the power number:\n");
    scanf("%d",&power);

    power_number = pow(base,power);

    printf("Result: %d^%d = %d\n",base,power,power_number);
}