#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, mynumber;
    mynumber = 0;

    printf("Enter a number: ");
    scanf("%d", &mynumber);

    if (mynumber < 0) {
        printf("Please enter a positive number!\n");
        return 0;
    }

    for (i = 2; i < mynumber / 2; i++) {
        if (mynumber % i == 0) {
            printf("\n%d is not a prime number because it is divisible by %d.\n", mynumber, i);
            return 0;
        }
    }

    printf("\n%d is a prime number.\n", mynumber);
    return 0;
}
