#include <stdio.h>
#include <stdlib.h>

int main() {

    int mynumber1, mynumber2, mynumber3, sum;

    mynumber1 = mynumber2 = mynumber3 = 25;
    
    sum = mynumber1 + mynumber2 + mynumber3;

    printf("Your number one is: %d\n", mynumber1);
    
    printf("Your number two is: %d\n", mynumber2);
    
    printf("Your number three is: %d\n", mynumber3);
    
    printf("The sum of all numbers is: %d\n", sum);

    return 0;
}
