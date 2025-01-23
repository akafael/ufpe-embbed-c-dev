#include <stdio.h>

int main() {
    float scores[3] = {0,0,0};
    float averageScores = 0;

    printf("Inform the 3 scores:\n");
    scanf("%f %f %f",&scores[0],&scores[1],&scores[2]);

    averageScores = (scores[0] + scores[1] + scores[2])/3 + scores[3]; 

    printf("The average of all scores is %.2f\n",averageScores);
}