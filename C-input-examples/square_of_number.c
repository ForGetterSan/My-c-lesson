#include <stdio.h>
#include <stdlib.h>

int main() {

    int mynumber1;

    printf("Enter any number: ");
    scanf("%d", &mynumber1);

    printf("------------\n");
    printf("The square of your number is: %d", mynumber1 * mynumber1);
    return 0;
}
