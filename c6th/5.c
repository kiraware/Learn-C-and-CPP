#include <stdio.h>

int main(void){
	for(int i = 0; i<10; i++){
		if (i % 2)
			continue;
		printf("%d",i);
		}
	return 0;
	}