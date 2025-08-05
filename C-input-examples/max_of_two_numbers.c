#include <stdio.h>
#include <stdlib.h>

int main () {

    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    (number1 > number2)
        ? printf("The larger number is: %d\n", number1)
        : printf("The larger number is: %d\n", number2);

    return 0;
}
