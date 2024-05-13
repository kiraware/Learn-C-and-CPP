#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main(){
	int mile;
	cout<<"Enter number of mile(s): ";cin>>mile;
	cout<< mile << " mile(s) equal to " << mile*1.609 << " km\n";
	return 0;
	}