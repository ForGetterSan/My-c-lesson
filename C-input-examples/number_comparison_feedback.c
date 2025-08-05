#include <stdio.h>
#include <stdlib.h>

int main () {

    int mynumber1, mynumber2;

    printf("Enter the first number: ");
    scanf("%d", &mynumber1);

    printf("Enter the second number: ");
    scanf("%d", &mynumber2);

    if (mynumber1 > mynumber2) {
        printf("Great work\n");
    } else if (mynumber1 < mynumber2) {
        printf("Failed\n");
    } else {
        printf("Nice try, daddy\n");
    }

    return 0;
}
