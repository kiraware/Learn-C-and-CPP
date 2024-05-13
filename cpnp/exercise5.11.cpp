#include "help.h"

void fib(int num){
	long long int a=0,b=1,tmp;
	int i=0;
	if (num == 0)
		cout<< 0;
	else if (num == 1)
		cout<< 1;
	while (i<num){
		cout<<a<<' ';
		tmp = a;
		a = b;
		b = tmp+b;
		i++;
		}
	}

int main(){
	int a;
	cin>>a;
	fib(a);
	return 0;
	}