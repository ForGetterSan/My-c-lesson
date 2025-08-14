#include <stdio.h>
#include <stdlib.h>

int main() {
	char letter;

printf("enter a any letter:");
scanf("%c",&letter);
if (!((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))) {
       printf("Please enter a letter from A to Z.\n");

       return 0;
   }
 printf("your letter is:%c",letter);
    return 0;
}

