#include <stdio.h>
#include <stdlib.h>

int main() {

    int force, displacement, work;

    printf("Enter the force: ");
    scanf("%d", &force);

    printf("Enter the displacement: ");
    scanf("%d", &displacement);

    work = force * displacement;
    printf("Work done: %d\n", work);

    return 0;
}
