#include "help.h"

int sum(vector<int> &r){
	int sum = 0;
	for (int &a : r){
		sum += a;
		}
	return sum;
	}

int main(){
	int a,i,tmp,tot;
	vector<int> list;

	cout<<"Please enter the number of values you want to sum\n";
	cin>>a;
	
	cout<<"Please enter some integers (press '|' to stop): ";
	for(i = 0; cin >> tmp; i++){
		list.push_back(tmp);
		}

	tot = sum(list);
	cout<<"The sum of the first "<<i<<" numbers ( "; 
	for (int &x : list)
		cout<<x<<' ';
	cout<<") is "<< tot<<".";
	}