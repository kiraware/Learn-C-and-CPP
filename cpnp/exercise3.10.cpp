#include "help.h"

int main(){
	string operation;
	double a,b;
	cin >> operation >> a >> b;
	if (operation == "+")
		cout << a+b;
	else if (operation == "-")
		cout << a-b;
	else if (operation == "*")
		cout << a*b;
	else if (operation == "/")
		cout << a/b;


	return 0;
	}