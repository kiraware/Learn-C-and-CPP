#include "help.h"

double ctok(double c) {
	if ( c<0 || c>100 ){
		return -1;
		}
	double k = c + 273.15;
	return k;
	}

double ktoc(double k) {
	if ( k<273.15 || k>373.15 ){
		return -1;
		}
	double c = k - 273.15;
	return c;
	}

int main(){
	double temp = 0; // declare input variable
	string d;
	cin >> temp >> d; // retrieve temperature to input variable
	if (d == "c"){
		double k = ctok(temp); // convert temperature
		cout << k << '\n' ; // print out temperature
		}
	else if (d == "k"){
		double c = ktoc(temp); // convert temperature
		cout << c << '\n' ; // print out temperature
		}
	return 0;
	}