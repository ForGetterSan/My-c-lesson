#include <stdio.h>
#include <stdlib.h>

int main() {

    float voltage, current, power;

    printf("Enter the voltage: ");
    scanf("%f", &voltage);

    printf("Enter the current: ");
    scanf("%f", &current);

    power = current * voltage;

    printf("The electrical power is: %.2f watts\n", power);

    return 0;
}
