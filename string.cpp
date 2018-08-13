#include "string.hpp"

String::String()
{
	char* txt="\0";
	this->text=txt;
	this->length=0;

}

/*String::String(int length) //todo : Determine a way to bypass the variable length array problem.
{
	char txt[length];
	for(int i=0;i<length;i++)
	{
		txt[i]=' ';
	}
	txt[length-1]='\0';
	this->text=txt;
	this->length = length;
}*/

String::String(char* text)
{
	this->text = text;
	char *pointer = text;
	int l = 0;
	while(*pointer!='\0')
	{
		l++;
		pointer++;
	}
	this->length = l;
}

String::~String()
{

}







