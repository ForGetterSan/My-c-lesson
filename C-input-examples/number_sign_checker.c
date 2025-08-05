#include <stdio.h>
#include <stdlib.h>

int main () {

    int mynumber;

    printf("Enter any number: ");
    scanf("%d", &mynumber);

    if (mynumber > 0) {
        printf("Your number is positive.\n");
    } else if (mynumber < 0) {
        printf("Your number is negative.\n");
    } else {
        printf("Your number is zero.\n");
    }

    return 0;
}
