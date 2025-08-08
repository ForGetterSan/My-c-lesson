#include <stdio.h>
#include <stdlib.h>

int main() {
    int myNumber, part1, part2, newNumber;

    printf("Enter a number: ");
    scanf("%d", &myNumber);

    part1 = myNumber / 100;   
    part2 = myNumber % 100;   

    newNumber = (part1 + part2) * (part1 + part2);

    if (newNumber == myNumber) {
        printf("This is a special number.\n");
    } else {
        printf("This is not a special number.\n");
    }

    return 0;
}
