#include <stdio.h>
#include <stdlib.h>

int main() {

    float distance_traveled, elapsed_time, average_speed;

    printf("Enter the distance traveled: ");
    scanf("%f", &distance_traveled);

    printf("Enter the elapsed time: ");
    scanf("%f", &elapsed_time);

    average_speed = distance_traveled / elapsed_time;
    printf("Average speed: %f\n", average_speed);

    return 0;
}
