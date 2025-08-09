#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("Enter the three angles of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b + c != 180) {
        printf("The sum of the angles of a triangle cannot exceed or be less than 180.\n");
    } else {
        if (a == 60 && b == 60 && c == 60) {
            printf("This is an equilateral triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("This is an isosceles triangle.\n");
        } else {
            printf("This is a scalene triangle.\n");
        }
    }

    return 0;
}
