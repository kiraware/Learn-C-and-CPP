#include "help.h"

int main(){
	string a;
	vector<string> dislike = {"wow","lol","kok"};
	int state;
	while (cin>>a){
		state = 0;
		for (string tmp : dislike){
			if (a == tmp)
				state = 1;	
			}
		if(!state)
			cout<<a<<endl;
		}
	return 0;
	}