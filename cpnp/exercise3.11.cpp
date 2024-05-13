#include "help.h"

int main(){
	double p,n,d,q,hd,dol;
	cout<<"Pennie(s): ";cin>>p;
	cout<<"Nickle(s): ";cin>>n;n*=5;
	cout<<"Dime(s): ";cin>>d;d*=10;
	cout<<"Quarter(s): ";cin>>q;q*=25;
	cout<<"Half Dollar(s): ";cin>>hd;hd*=50;
	cout<<"Dollar(s): ";cin>>dol;dol*=100;
	cout<<"You have " << p << ' ' << (p < 2 ? "Pennie" : "Pennies") << '\n' ;
	cout<<"You have " << n << ' ' << (n < 2 ? "Nickle" : "Nickles") << '\n' ;
	cout<<"You have " << d << ' ' << (d < 2 ? "Dime" : "Dimes") << '\n' ;
	cout<<"You have " << q << ' ' << (q < 2 ? "Quarter" : "Quarters") << '\n' ;
	cout<<"You have " << hd << ' ' << (hd < 2 ? "Half Dollar" : "Half Dollars") << '\n' ;
	cout<<"You have " << dol << ' ' << (dol < 2 ? "Dollar" : "Dollars") << '\n' ;
	cout<<"The value of all of your coins is "<< '$' <<  (p+n+d+q+hd+dol)/100 << " cents" << '\n' ;

	return 0;
	}