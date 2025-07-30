#include <stdio.h>
#include <stdlib.h>

int main() {

    float length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = width * length;
    perimeter = 2 * (width + length);

    printf("The area of the rectangle: %f\n", area);
    printf("The perimeter of the rectangle: %f\n", perimeter);

    return 0;
}
