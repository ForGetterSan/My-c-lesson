#include <stdio.h>

int main() {
    int mynumber1;

    printf("Enter any number: ");
    scanf("%d", &mynumber1);

    printf("the number is:\t\t");
    printf("square of number:\t\t");
    printf("cube of number:\n");

    printf("--------------\t\t");
    printf("------------------\t\t");
    printf("---------------\n");

    // Sabit genişlikte yazdır (10 karakterlik alan)
    printf("%-10d\t\t", mynumber1);
    printf("%-10d\t\t", mynumber1 * mynumber1);
    printf("%-10d\n", mynumber1 * mynumber1 * mynumber1);

    return 0;
}
