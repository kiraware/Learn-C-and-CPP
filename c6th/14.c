#include <stdio.h>
#include <stdlib.h>

int main(){
	int * p;
	p =(int *) malloc(sizeof(int) * 10);
	free(p);
	return 0;
	}