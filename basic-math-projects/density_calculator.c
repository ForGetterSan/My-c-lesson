#include <stdio.h>
#include <stdlib.h>

int main() {

    float mass, volume, density;

    printf("Enter the mass: ");
    scanf("%f", &mass);

    printf("Enter the volume: ");
    scanf("%f", &volume);

    density = mass / volume;
    printf("The density is: %f\n", density);

    return 0;
}
