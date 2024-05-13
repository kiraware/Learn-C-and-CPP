#include "help.h"

vector<int>::iterator maxv(vector<int>::iterator beg, vector<int>::iterator end){
	int max=*beg;
	vector<int>::iterator maxit;
	while(beg < end){
		if (max<*beg){
			max = *beg;
			maxit = beg;
			}
		++beg;
		}
	return maxit;
	}

int main(){
	vector<int>a{1,2,3,5,4,10,9,40,3,4,5};
	auto x = maxv(a.begin(),a.end());
	cout<<*x;
	return 0;
	}