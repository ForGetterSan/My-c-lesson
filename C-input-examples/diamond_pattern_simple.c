#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, number;

    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        for (j = 1; j <= number - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (i = number - 1; i >= 1; i--) {
        for (j = 1; j <= number - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
