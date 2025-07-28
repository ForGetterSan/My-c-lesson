#include <stdio.h>
#include <stdlib.h>

int main() {

    float mynumber1, mynumber2, mynumber3, division;

    mynumber1 = mynumber2 = mynumber3 = 25;

    division = mynumber1 / mynumber2 / mynumber3;

    printf("Your number one is: %f\n", mynumber1);

    printf("Your number two is: %f\n", mynumber2);

    printf("Your number three is: %f\n", mynumber3);

    printf("The division of all numbers is: %f\n", division);

    return 0;
}
