#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Increasing triangle
    for (i = 1; i <= number; i++) {
        for (j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

    // Decreasing triangle
    for (i = 1; i <= number; i++) {
        for (j = number; j >= i; j--) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
