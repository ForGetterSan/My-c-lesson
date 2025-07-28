#include <stdio.h>
#include <stdlib.h>

int main() {
	int mynumber1,mynumber2,Multiplication;

	printf("enter a first number:");
	scanf("%d",&mynumber1);

	printf("enter a second number:");
	scanf("%d",&mynumber2);

	Multiplication=mynumber1 * mynumber2;
	printf("The multiplication of the entered numbers is: %d", Multiplication);


	return 0;
}


