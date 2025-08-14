#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, number;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        // Print leading spaces
        for (j = 1; j <= number - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
