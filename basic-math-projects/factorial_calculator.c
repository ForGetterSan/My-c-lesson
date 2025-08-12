#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, number;
    long long factorial = 1;  // factorial can get large, so long long is safer

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for (i = 1; i <= number; i++) {
        factorial *= i;
    }
