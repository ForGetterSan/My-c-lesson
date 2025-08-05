#include <stdio.h>
#include <stdlib.h>

int main () {

    int myNumber, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &myNumber);

    lastDigit = myNumber % 10;

    if (lastDigit == 0) {
        printf("Your number is even and ends with 0.\n");
    } else if (lastDigit == 2) {
        printf("Your number is even and ends with 2.\n");
    } else if (lastDigit == 4) {
        printf("Your number is even and ends with 4.\n");
    } else if (lastDigit == 6) {
        printf("Your number is even and ends with 6.\n");
    } else if (lastDigit == 8) {
        printf("Your number is even and ends with 8.\n");
    } else {
        printf("Your number is odd and ends with: %d\n", lastDigit);
    }

    return 0;
}
