#include <stdio.h>
#include <stdlib.h>

int main() {

    float mass, specificHeat,heat, T1, T2;

    printf("Enter the mass: ");
    scanf("%f", &mass);

    printf("Enter the specific heat: ");
    scanf("%f", &specificHeat);

    printf("Enter the initial temperature: ");
    scanf("%f", &T1);

    printf("Enter the final temperature: ");
    scanf("%f", &T2);


    heat = mass * specificHeat * (T2 -T1);

    printf("Heat energy (Q): %f\n", heat);

    return 0;
}



