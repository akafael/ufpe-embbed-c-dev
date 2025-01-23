#include <stdio.h>

int main() {
    float salary = 0;
    float newSalary = 0;

    printf("Inform the salary:\n");
    scanf("%f",&salary);

    newSalary = salary * 1.25; 

    printf("The salary is %.2f\n",newSalary);
}