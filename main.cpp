#include <string.hpp>
#include <iostream>
int main()
{
	/*String x;
	String y("Hello world!\0");
	//std::cout<<x.text<<x.length<<std::endl<<y.text<<y.length<<std::endl;
	String z(10);
	std::cout<<z.text<<z.length<<std::endl;*/
	String test;
	std::cout<<"Input text>";
	std::cin>>test;
	std::cout<<"You have entered '"<<test<<"'."<<std::endl;
	std::cout<<"The length of the entered string is "<<test.length<< " characters.";
	while(1);
	return 0;
}