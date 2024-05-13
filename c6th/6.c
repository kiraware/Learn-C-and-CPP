#include <stdio.h>

int main(void){

	long input;
	char ch;
	while (scanf("%ld", &input) != 1){
		while ((ch = getchar()) != '\n')
			putchar(ch); // dispose of bad input
		printf(" is not an integer.\nPlease enter an ");
		printf("integer value, such as 25, -178, or 3: ");
		}

	}