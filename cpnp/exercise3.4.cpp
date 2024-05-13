#include "help.h"

int main(){
	int val1,val2;
	cout<<"Enter two numbers ";cin>>val1>>val2;
	cout<<"Smaller = "<< (val1<val2 ? val1 : val2) <<'\n';
	cout<<"Larger  = "<< (val1>val2 ? val1 : val2) <<'\n';
	cout<<"Sum = " << (val1+val2) <<'\n';
	cout<<"Difference = " << (val1>val2 ? val1 : val2)-(val1<val2 ? val1 : val2) <<'\n';
	cout<<"Product = " << (val1*val2) <<'\n';
	cout<<"Ratio = " << (val1/val2) <<'\n';
	
	return 0;
	}