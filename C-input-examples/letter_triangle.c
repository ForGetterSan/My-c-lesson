#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    char input, character = 'A';

    printf("Enter an uppercase letter: ");
    scanf("%c", &input);

    if (input < 'A' || input > 'Z') {
        printf("Please enter a valid uppercase letter.\n");
        return 0;
    }

    for (i = 1; i <= (input - 'A' + 1); i++) {
        for
