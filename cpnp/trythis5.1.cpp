#include "help.h"
int area(int length); // calculate area of a rectangle
int main(){
	int s1 = area(7); // error: ) missing
	int s2 = area(7); // error: ; missing
	int s3 = area(7); // error: Int is not a type
	int s4 = area(7); // error: non-terminated character (' missing)
	return 0;
	}