#include <stdio.h>
#include <stdlib.h>

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

    printf("%d\t\t\t", mynumber1);
    printf("%d\t\t\t", mynumber1 * mynumber1);
    printf("%d\n", mynumber1 * mynumber1 * mynumber1);

    return 0;
}
