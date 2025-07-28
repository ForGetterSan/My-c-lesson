#include <stdio.h>
#include <stdlib.h>

int main() {

    int mynumber1, mynumber2, mynumber3,extraction;

    mynumber1 = mynumber2 = mynumber3 = 25;

    extraction= mynumber1 - mynumber2 - mynumber3;

    printf("Your number one is: %d\n", mynumber1);

    printf("Your number two is: %d\n", mynumber2);

    printf("Your number three is: %d\n", mynumber3);

    printf("The subtraction of all numbers is: %d\n", extraction);


    return 0;
}
