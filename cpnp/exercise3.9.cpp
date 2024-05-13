#include "help.h"

int main(){
	string a;
	while (cin>>a){
		if (a == "zero")
			cout<<0<<' ';
		else if (a == "one")
			cout<<1<<' ';
		else if (a == "two")
			cout<<2<<' ';
		else if (a == "three")
			cout<<3<<' ';
		else if (a == "four")
			cout<<4<<' ';
		else
			cout<<"not a number I know ";

		}
	return 0;
	}