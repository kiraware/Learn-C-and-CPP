#include <iostream>
int main()
{
	int a,b = 0;
    std::cout<<"Input Number"<<std::endl;
	std::cin>>a>>b;
	while (a <= b){
		std::cout<<a<<std::endl;
		++a;}
	return 0;
}
