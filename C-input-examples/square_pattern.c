#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, number;

    printf("Enter the size of the square: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        for (j = 1; j <= number; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
