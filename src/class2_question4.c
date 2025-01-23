#include <stdio.h>

int main() {
    float triagleBaseLengh = 0;
    float triagleHeightLengh = 0;
    float triangleArea = 0;

    printf("Inform the base lengh:\n");
    scanf("%f",&triagleBaseLengh);

    printf("Inform the triangle's height lengh:\n");
    scanf("%f",&triagleBaseLengh);

    triangleArea = triagleBaseLengh * triagleHeightLengh * 0.5; 

    printf("The triangle's area is %.2f\n",triangleArea);
}