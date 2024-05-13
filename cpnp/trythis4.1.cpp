#include "help.h"
using namespace std;

int main(){
	constexpr double euro_per_usd = 1.25;
	constexpr double pound_per_usd = 0.8;
	constexpr double yen_per_usd = 10;
	
	double length = 1;
	char unit = ' '; 
	cout<< "Please enter a length followed by a unit (e, p, or y):\n";
	cin >> length >> unit;
	if (unit == 'e')
		cout << length << " euro == " << length/euro_per_usd << "usd\n";
	else if (unit == 'p')
		cout << length << " pound == " << length/pound_per_usd << "usd\n";
	else if (unit == 'y')
		cout << length << " yen == " << length/yen_per_usd << "usd\n";
	else
		cout << "Sorry, I don't know a unit called '" << unit << "'\n";
	}