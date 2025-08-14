#include <stdio.h>
#include <stdlin.h>
int main() {
    char letter;
    int size, i, j;

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    if (!((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))) {
        printf("Please enter a letter from A to Z.\n");
        return 0;
    }

    printf("Enter the size of the heart (odd number, e.g., 7, 9, 11): ");
    scanf("%d", &size);

    if (size % 2 == 0 || size < 3) {
        printf("Please enter an odd number greater than or equal to 3.\n");
        return 0;
    }

    // Kalp üst kısmı
    for (i = size/2; i <= size; i += 2) {
        for (j = 1; j < size-i; j += 2)
            printf(" ");

        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("%c", letter);
            else
                printf(" ");
        }

        for (j = 1; j <= size-i; j++)
            printf(" ");

        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("%c", letter);
            else
                printf(" ");
        }

        printf("\n");
    }

    // Kalp alt kısmı
    for (i = size; i >= 1; i--) {
        for (j = i; j < size; j++)
            printf(" ");

        for (j = 1; j <= (i*2)-1; j++) {
            if (j == 1 || j == (i*2)-1)
                printf("%c", letter);
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
