#include <stdio.h>
#include <stdlib.h>

struct A{
	struct A * y;
	};

int main(){
	struct A * p;
	struct A * h1 = (struct A *) malloc(sizeof(struct A));
	struct A * h2 = (struct A *) malloc(sizeof(struct A));
	p = h1;
	h1->y = h2;
	free(p);
	p = p->y;		//is the pointer point to valid structure?
	free(p);
	puts("ok");
	return 0;
	}