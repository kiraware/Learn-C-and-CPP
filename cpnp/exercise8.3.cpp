#include "help.h"

void print(vector<int> &v, string label="\n"){
	for(auto &r : v)
		cout<<r<<label;
	}

void fib(int x, int y, vector<int> &v, int n){
	v.push_back(x);
	for(int i=0,temp; i<n ; v.push_back(x),i++){
		temp = x;
		x = y;
		y = temp+y;
		}
	}

int main(){
	vector<int>vi;
	fib(2,3,vi,666);
	print(vi);
	return 0;
	}