#include <stdio.h>
#include <stdlib.h>

int main() {

    float distance, time, speed;

    printf("Enter the distance: ");
    scanf("%f", &distance);

    printf("Enter the time: ");
    scanf("%f", &time);

    speed = distance / time;
    printf("Your speed is: %f\n", speed);

    return 0;
}
