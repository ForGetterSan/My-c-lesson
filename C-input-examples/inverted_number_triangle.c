#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 0; i <= number; i++) {
        for (j = 1; j <= number - i; j++) {
            printf("%d", i + 1);
        }
        printf("\n");
    }

    return 0;
}
