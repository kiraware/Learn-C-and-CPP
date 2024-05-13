#include "help.h"

int main(){
	string a,b,c;
	string max, mid, min;
	cin >> a >> b >> c;
	max = (a>b && a>c) ? a : (b>a && b>c) ? b : c;
	mid = ((a>b && a<c) || (a>c && a<b)) ? a : ((b>a && b<c) || (b>c && b<a)) ? b : c;
	min = (a<b && a<c) ? a : (b<a && b<c) ? b : c;
	cout << min << ' ' << mid << ' '  << max;
	return 0;
	}