#include <stdio.h>
#include <stdlib.h>

int main() {

    float radius, height, volume, surface_area, base_area, lateral_area;
    const float pi = 3.14159;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Enter the height: ");
    scanf("%f", &height);

    base_area = pi * radius * radius;
    lateral_area = 2 * pi * radius * height;
    volume = pi * radius * radius * height;
    surface_area = 2 * base_area + lateral_area;

    printf("Cylinder volume: %.2f\n", volume);
    printf("Cylinder surface area: %.2f\n", surface_area);

    return 0;
}
