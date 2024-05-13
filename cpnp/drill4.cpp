#include "help.h"

constexpr double cm_per_m = 100,cm_per_inch = 2.54,inch_per_ft = 12; 


int main(){
	vector<double> history;
	double a,max=0,min=9999999999999999999999,sum=0,cnt=0;
	while(cin>>a){
		history.push_back(a);
		if(a>max){
			max = a;
			}
		if(a<min){
			min = a;
			}
		sum += a;
		cnt++;
		}
	cout<< "The largest num so far: "<< max <<endl;
	cout<< "The smallest num so far: "<< min<<endl;
	cout<< "Num count entered "<< cnt<<endl;
	cout<< "Total = "<< sum<<endl;
	sort(history.begin(),history.end());
	cout<<"==================================================================\n";
	for(double &r : history){
		cout<<r<<' ';
		}
	return 0;
	}