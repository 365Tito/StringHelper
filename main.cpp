#include <string.hpp>
#include <iostream>
int main()
{
	String x;
	String y("Hello world!\0");
	std::cout<<x.text<<x.length<<std::endl<<y.text<<y.length<<std::endl;
	while(1);
	return 0;
}