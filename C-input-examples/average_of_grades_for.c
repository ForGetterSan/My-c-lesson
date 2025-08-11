#include <stdio.h>
#include <stdlib.h>

int main() {
    float grade, note1, average, sumgrade = 0.0;

    printf("How many grades will you enter?: ");
    scanf("%f", &grade);

    if (grade <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    for (int i = 1; i <= grade; ++i) {
        printf("Please enter the grade: ");
        scanf("%f", &note1);

        if (note1 <= 0) {
            printf("Please enter a positive number.\n");
            break;
        } else {
            sumgrade += note1;
        }
    }

    average = sumgrade / grade;
    printf("Average is %.3f\n", average);

    return 0;
}
