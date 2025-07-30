#include <stdio.h>
#include <stdlib.h>

int main() {

    float principal, interestRate, duration, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter the duration: ");
    scanf("%f", &duration);

    interest = (principal * interestRate * duration) / 100;

    printf("Interest: %.2f\n", interest);

    return 0;
}
