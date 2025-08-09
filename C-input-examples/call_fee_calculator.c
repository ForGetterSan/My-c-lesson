#include<stdio.h>
#include <stdlib.h>

int main(){

	float talktime,fee;
	printf("enter a talktime:");
	scanf("%f",&talktime);

if(talktime <=4){
	fee=1;
	printf("ücretin:f%",fee);
}

else {
	fee=1+(talktime-4) * 0.07;

printf("ücretin2:%f",fee);
}
return 0;
}

