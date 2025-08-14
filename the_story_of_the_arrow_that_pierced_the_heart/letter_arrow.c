#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, a, j, number = 1;
    char letter;
    a = 0;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if (!((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))) {
        printf("Please enter a letter from A to Z.\n");
        return 0;
    }

    printf("Enter a number (must be odd): ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 0;
    }

    for (i = 0; i < number; i++) {
        if (i <= number / 2)
            a++;
        else
            a--;

        for (j = 1; j < a; j++)
            printf(" ");

        printf("%c\n", letter);
    }

    return 0;
}
