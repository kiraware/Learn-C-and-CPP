#include "help.h"

void print(vector<int> &v, string label="\n"){
	for(auto &r : v)
		cout<<r<<label;
	}

int main(){
	vector<int> a(10,20);
	print(a);
	print(a," ");
	
	return 0;
	}