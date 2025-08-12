#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    float sumgrade, average, examgrade;

    sumgrade = 0.0;
    examgrade = 0.0;
    i = 1; // Başlangıç değeri

    do {
        printf("%dth exam grade: ", i);
        scanf("%f", &examgrade);

        if (examgrade == 0) {
            break; // 0 girilirse çık
        }

        if (examgrade < 0) {
            printf("Please enter a positive number.\n");
            continue; // Negatifse başa dön
        } else {
            sumgrade += examgrade; // Toplama ekle
        }

        i++;
    } while (examgrade != 0);

    if (i > 1) { // En az bir not girilmişse
        average = sumgrade / (i - 1);
        printf("\nYou entered %d exam grades\n", i - 1);
        printf("Average: %.2f\n", average);
    } else {
        printf("No grades entered.\n");
    }

    return 0;
}
