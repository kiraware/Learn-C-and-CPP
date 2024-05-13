#include "help.h"

int main(){
	vector<string>name = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	vector<char>number = {'0','1','2','3','4','5','6','7','8','9'};
	string a;
	while(cin>>a){
		for(char x : a){
			if (x == number[0]){
				cout<<name[0]<<' ';
				}
			else if (x == number[1]){
				cout<<name[1]<<" ";
				}
			else if (x == number[2]){
				cout<<name[2]<<" ";
				}
			else if (x == number[3]){
				cout<<name[3]<<" ";
				}
			else if (x == number[4]){
				cout<<name[4]<<" ";
				}
			else if (x == number[5]){
				cout<<name[5]<<" ";
				}
			else if (x == number[6]){
				cout<<name[6]<<" ";
				}
			else if (x == number[7]){
				cout<<name[7]<<" ";
				}
			else if (x == number[8]){
				cout<<name[8]<<" ";
				}
			else if (x == number[9]){
				cout<<name[9]<< " ";
				}
			else{
				cout<<"Unknown Number ";
				}
			}
		cout<<endl;

		}
	return 0;
	}