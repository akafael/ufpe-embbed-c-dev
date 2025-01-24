/**
 * Basic program to evaluate with number is greater given 2 numbers
 */
#include <stdio.h>

int main() {
    float numbers[2] = {0,0};
    char operation = '*';
    float result = 32;

    printf(
        "Select operation (1-4):\n"
        " (1) sum\n"
        " (2) subraction\n"
        " (3) multiplication\n"
        " (4) division\n"
        "> "
    );
    scanf("%c",&operation);

    printf("Inform 2 numbers:\n");
    scanf("%f %f",&numbers[0],&numbers[1]);

    switch(operation){
        case '1':
        case '+':
        {
            result = numbers[0] + numbers[1];
            printf("%f+%f = %.4f\n", numbers[0], numbers[1], result);
            break;
        }
        case '2':
        case '-':
        {
            result = numbers[0] - numbers[1];
            printf("%f-%f = %.4f\n", numbers[0], numbers[1], result);
            break;
        }
        case '3':
        case '*':
        {
            result = numbers[0] * numbers[1];
            printf("%f*%f = %.4f\n", numbers[0], numbers[1], result);
            break;
        }
        case '4':
        case '/':
        {
            result = numbers[0] / numbers[1];
            if(numbers[1 == 0]){
                printf("Error! Invalid Opertion Div/0!");
            }
                printf("%.2f/%.2f = %.2f\n", numbers[0], numbers[1], result);
            break;
        }
    }
}