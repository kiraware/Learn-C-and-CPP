#include "help.h"

void print(vector<int> &v, string label="\n"){
	for(auto &r : v)
		cout<<r<<label;
	}

vector<int> reverse(const vector<int>&vi){
	vector<int>vec;
	for(int i = vi.size()-1; i>=0; --i)
		vec.push_back(vi[i]);
	return vec;
	}

int main(){
	vector<int>a = {0,1,2,3,4,5};
	vector<int>b = reverse(a);
	print(a," ");
	print(b," ");
	return 0;
	}