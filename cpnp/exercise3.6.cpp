#include "help.h"

int main(){
	int a,b,c;
	int max,min;
	cin >> a >> b >> c;
	max = (a>b && a>c) ? a : (b>a && b>c) ? b : c;
	min = (a<b && a<c) ? a : (b<a && b<c) ? b : c;
	cout << min << ' ' << a+b+c-max-min << ' '  << max;
	return 0;
	}