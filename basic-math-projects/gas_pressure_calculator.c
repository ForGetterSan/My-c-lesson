#include <stdio.h>
#include <stdlib.h>

int main() {
    float pressure;
    int numberOfMoles, volume, temperature;
    const float constantR = 0.82;

    printf("Enter the volume of the container: ");
    scanf("%d", &volume);

    printf("Enter the number of moles of gas: ");
    scanf("%d", &numberOfMoles);

    printf("Enter the temperature of the environment (in Kelvin): ");
    scanf("%d", &temperature);

    pressure = (numberOfMoles * constantR * temperature) / volume;

    printf("The pressure of the gas in a container with volume %d is: %.2f atm\n", volume, pressure);

    return 0;
}


