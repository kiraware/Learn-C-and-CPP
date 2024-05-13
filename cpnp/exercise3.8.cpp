#include "help.h"

int main(){
	int a;
	string b;
	cin >> a;
	b =  (a % 2 == 0) ? "Even" : "Odd";
	cout << "The value " << a << " is an " << b << " number";
	return 0;
	}