#include "help.h"

void getname(vector<string>&vs){
	string name;
	while(cin>>name){
		if(name=="-")
			break;
		vs.push_back(name);
		}
	}

void getage(vector<double>&vd){
	double d;
	while(cin>>d)
		vd.push_back(d);
	}
	

int main(){
	vector<string>name;
	vector<double>age;
	getname(name);
	cout<<"lol";
	getage(age);
	for(auto &r:name)
		cout<<r;
	for(auto &r:age)
		cout<<r;

	sort(name.begin(),name.end());
	return 0;
	}