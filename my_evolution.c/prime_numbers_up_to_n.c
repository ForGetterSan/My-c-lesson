#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int mynumber,i,j,control;
    printf("Bir sayı giriniz: ");
    scanf("%d",&mynumber);

    for(i=2;i<=mynumber;i++){
        control=1;
        for(j=2;j<=sqrt(i);j++){
            if(i % j == 0){
                control=0;
                break;
            }
        }
        if(control != 0){
            printf("%d\n",i);
        }
    }
    return 0;
}