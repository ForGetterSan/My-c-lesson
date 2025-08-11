#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, mynumber;

    i = 1;
    mynumber = 0;

    printf("Enter a number: ");
    scanf("%d", &mynumber);

    if (mynumber < 1 || mynumber > 10) {
        printf("Please do not do this.\n");
        return 0;
    }

    while (i < 10) {
        printf("%d x %d = %d\n", mynumber, i, mynumber * i);
        i++;
    }

    return 0;
}
