#include <stdio.h>
#include <stdlib.h>

int main() {

    int day, number;
    char *dayname;
    day = 0;
    number = 0;
    printf("Enter a day number:");
    scanf("%d", &day);

    switch(day) {
        case 7:
            number += 25;
            if(day == 7) { dayname = "Sunday"; }

        case 6:
            number += 19;
            if(day == 6) { dayname = "Saturday"; }

        case 5:
            number += 15;
            if(day == 5) { dayname = "Friday"; }

        case 4:
            number += 10;
            if(day == 4) { dayname = "Thursday"; }

        case 3:
            number += 7;
            if(day == 3) { dayname = "Wednesday"; }

        case 2:
            number += 5;
            if(day == 2) { dayname = "Tuesday"; }

        case 1:
            number += 2;
            if(day == 1) { dayname = "Monday"; }
    }
    printf("Total sales on %s: %d\n", dayname, number);

    return 0;
}
