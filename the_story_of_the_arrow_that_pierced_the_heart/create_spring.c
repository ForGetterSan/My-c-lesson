#include <stdio.h>
#include <math.h>

int main() {
    int radius = 10; // Yarıçap
    int i, j;

    for(i = -radius; i <= radius; i++) {
        for(j = 0; j <= radius; j++) {
            double distance = sqrt(i*i + j*j);
            if(distance >= radius - 0.5 && distance <= radius + 0.5) {
                printf("*"); // Yay kısmı
            } 
            else if(j == 0) {
                printf("|"); // Yayın ipi (merkezden başlayan dikey çizgi)
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
