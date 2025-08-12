#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, i = 1;
    int smallest = 0, largest = 0;
    int firstInput = 1;

    do {
        printf("%dth - Enter a number (0 to stop): ", i);
        scanf("%d", &number);

        if (number == 0) break;

        if (firstInput) {
            smallest = largest = number;
            firstInput = 0;
        }

        if (number < smallest) smallest = number;
        if (number > largest) largest = number
