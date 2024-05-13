#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }


int main(){
	string previous = " "; 
	string current; 
	int count = 0;
	while (cin>>current) { // read a stream of words
		if (previous == current){ // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
			count++;
			}
		previous = current;
		}
	cout << "total repeated word: " << count << '\n';
	}