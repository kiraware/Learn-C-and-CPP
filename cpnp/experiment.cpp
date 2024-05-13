#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
int a = 20000;
char c = a; // try to squeeze a large int into a small char
int b = c;
if (a != b) // != means “not equal”
cout << "oops!: " << a << "!=" << b << '\n';
else
cout << "Wow! We have large characters\n";
}