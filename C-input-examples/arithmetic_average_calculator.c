#include <stdio.h>
#include <stdlib.h>

int main () {

    float a, b, c, d, average;

    printf("Enter 4 numbers: "); 
    scanf("%f%f%f%f", &a, &b, &c, &d);

    average = (a + b + c + d) / 4;

    printf("The arithmetic average of the numbers you entered is: %f\n", average);

    return 0;
}
