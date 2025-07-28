#include <stdio.h>
#include <stdlib.h>
int main() {

float circumference,r,area;

	const float PI=3.1415;
	printf("enter the radius of the circle:");
	scanf("%f",&r);
	circumference=2*PI*r;
	area=PI*r*r;
	printf("circumference of circle;%f/n",circumference);
	printf("area of circle%f",area);
	return 0;

}
