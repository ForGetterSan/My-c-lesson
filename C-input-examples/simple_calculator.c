/*This program is a simple command-line calculator that performs basic arithmetic operations

(+, -, *, /) on two floating-point numbers entered by the user. It also handles division by zero.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float mynumber1, mynumber2;
    char myoperator;

    printf("Choose any operator (+, -, *, /): ");
    scanf(" %c", &myoperator);

    printf("Enter the first number: ");
    scanf("%f", &mynumber1);

    printf("Enter the second number: ");
    scanf("%f", &mynumber2);

    switch (myoperator) {
        case '/':
            if (mynumber2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                printf("Result: %.2f\n", mynumber1 / mynumber2);
            }
            break;

        case '*':
            printf("Result: %.2f\n", mynumber1 * mynumber2);
            break;

        case '+':
            printf("Result: %.2f\n", mynumber1 + mynumber2);
            break;

        case '-':
            printf("Result: %.2f\n", mynumber1 - mynumber2);
            break;

        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
