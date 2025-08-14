#include <stdio.h>

int main() {
    int number, i;
    int first = 1, second = 1, third;

    printf("How many Fibonacci elements to print: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("%d %d ", first, second);

    for (i = 3; i <= number; i++) {
        third = first + second;
        printf("%d ", third);
        first = second;
        second = third;
    }

    printf("\n\n%dth element: %d\n", number, second);

    return 0;
}
