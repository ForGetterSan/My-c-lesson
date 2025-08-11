#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, mynumber;
    i = 2;
    mynumber = 0;

    printf("Enter a number: ");
    scanf("%d", &mynumber);

    if (mynumber < 0) {
        printf("Please enter a positive number!\n");
        return 0;
    }

    while (i < mynumber / 2) {
        if (mynumber % i == 0) {
            printf("\n%d is not a prime number because it is divisible by %d.\n", mynumber, i);
            return 0;
        }
        i++;
    }

    printf("\n%d is a prime number.\n", mynumber);
    return 0;
}
