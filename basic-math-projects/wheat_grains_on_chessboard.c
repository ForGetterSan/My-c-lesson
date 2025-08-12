#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    double wheat = 1;
    double totalWheat = 0;

    for (i = 1; i <= 64; i++) {
        printf("Number of wheat grains on square %d: %20.0f\n", i, wheat);
        totalWheat += wheat;
        wheat *= 2;
    }

    printf("\nTotal number of wheat grains to be given: %20.0f\n", totalWheat);

    return 0;
}
