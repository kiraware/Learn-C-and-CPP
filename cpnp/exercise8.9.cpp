#include "help.h"

int sum(vector<double> &price, vector<double> &weight){
	int sum=0;
	int min = weight.size()<=price.size()? weight.size() : price.size();
	cout<<min<<endl;
	for (int i = 0; i<min; i++)
		sum += price[i]*weight[i];
	return sum;
	}

int main(){
	vector<double>a={1,2,3,4,5},b={10,20,30,40};
	cout<<sum(a,b);
	return 0;
	}