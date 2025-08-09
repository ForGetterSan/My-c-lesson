#include <stdio.h>
#include <stdlib.h>

int main() {
    char letter;
    printf("Enter any letter: ");
    scanf("%c", &letter);

    if ((letter >= 'A') && (letter <= 'Z')) {
        printf("%c is your uppercase letter", letter);
    }
    else if ((letter >= 'a') && (letter <= 'z')) {
        printf("%c is your lowercase letter", letter);
    }
    else {
        printf("%c is not a letter, dude. Try again.", letter);
    }
    return 0;
}
