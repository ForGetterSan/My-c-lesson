#include <stdio.h>
#include <stdlib.h>

int main() {

    float weight, height, BMI;

    printf("Please enter your weight: ");
    scanf("%f", &weight);

    printf("Please enter your height: ");
    scanf("%f", &height);

    BMI = weight / (height * height);
    printf("Your Body Mass Index (BMI) is: %f\n", BMI);

    return 0;
}

