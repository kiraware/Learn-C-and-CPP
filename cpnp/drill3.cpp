#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

inline void simple_error();

int main(){
	string first_name,friend_name;
	char friend_sex = 0;
	int age;
	cout<< "Enter the name of the person you want to write to\n";cin>>first_name;
	cout<< "Dear " << first_name << ','<< '\n';
	cout<<"how are you?\n"<< "Everything goes right, don't afraid\n";
	cout<<"What's name of your friend? ";cin>>friend_name;
	cout<<"Have you seen " << friend_name << " lately?\n";
	cout<<"What is your friend sex? f/m ";cin>>friend_sex;
	if(friend_sex == 'f')
		cout<<"If you see " << friend_name << " please ask her to call me.\n";
	else
		cout<<"If you see " << friend_name << " please ask him to call me.\n";
	cout<<"enter the age of the recipient: ";cin>>age;
	
	if (age<0 || age > 100)
		simple_error();

	if (age<12)
		cout<<"Next year you will be "<<age+1<<'\n';
	else if (age == 17)
		cout<<"Next year you will be able to vote.\n";
	else if (age>70)
		cout<<"I hope you are enjoying retirement.\n";
	cout<<"sincerely\n\n";
	cout<<"??";
	
	return 0;
	}

inline void simple_error(){cout<<"You're kidding!";}