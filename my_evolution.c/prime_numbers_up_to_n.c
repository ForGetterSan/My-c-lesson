#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, control, mynumber;

    printf("enter a number: ");
    scanf("%d", &mynumber);

    for (i = 2; i <= mynumber; i++) {
        control = 1;

        for (j = 2; j <= i / 2; j++) { 
            if (i % j == 0) {
                control = 0;
                break;
            }
        }

        if (control != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
