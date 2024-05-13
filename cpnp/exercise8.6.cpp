#include "help.h"

void print(vector<string> &v, string label="\n"){
	for(auto &r : v)
		cout<<r<<label;
	}

vector<string> reverse(const vector<string>&vi){
	vector<string>vec;
	for(int i = vi.size()-1; i>=0; --i)
		vec.push_back(vi[i]);
	return vec;
	}

int main(){
	vector<string>a = {"a","b","c"};
	vector<string>b = reverse(a);
	print(a," ");
	print(b," ");
	return 0;
	}