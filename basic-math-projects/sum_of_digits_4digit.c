#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, quotient, remainder, sum;
    sum = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    quotient = number / 1000;
    sum += quotient;
    remainder = number % 1000;

    quotient = remainder / 100;
    sum += quotient;
    remainder = remainder % 100;

    quotient = remainder / 10;
    sum += quotient;
    remainder = remainder % 10;

    sum += remainder;

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
