#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

// read name and age (2nd version)
int main(){
	cout << "Please enter your age\n";
	double age; 
	cin >> age; 
	cout << "You are " <<  age*12 <<  " Month" << "\n";
	}