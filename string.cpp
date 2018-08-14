#include "string.hpp"

String::String()
{
	char* txt="\0";
	this->text=txt;
	this->length=0;

}

String::String(int length)
{
	char* text = (char*)malloc((length+1)*sizeof(char));
	for(int i=0;i<length;i++)
	{
		*(text+i) = ' ';
	}
	*(text+length) = '\0';
	
	this->text = text;
	this->length = length;

}

String::String(char* text)
{
	this->length = this->len();
	char* txt = (char*)malloc(this->len()*sizeof(char));
	for(int i=0; i<this->length; i++)
		*(txt+i) = *(text+i);
	this->text = txt;


}

String::~String()
{

}
int String::len()
{
	char* pointer = this->text;
	int l = 0;
	while(*pointer!='\0')
	{
		l++;
		pointer++;
	}
	return l;
}
std::ostream& operator<<(std::ostream& os,String &s)  
{  
	os << s.text;  
    return os;  
}  

/*std::istream& operator>>(std::istream& is,String &s)  
{  
	char* input = new char[100];
//is.getline(;
//s.set_data(input,is); -- ?!
s.text = input + '\0';
s.length = s.count();
return is;


}*/


std::ostream& operator<< (std::ostream& os, const String& s) 
{
	if (s.len() > 0) 
    {
        for (unsigned j=0; j < s.len(); j++)
            os << s[j];
    } else os << "";

    return os;
}

std::istream& operator>> (std::istream& is, String& s) 
{
	//kako se od is dobija len jel moze
	//ili se koristi onaj count?
	//i nazovi ga len ili tako nesto 
	
    char* c = (char*)alloca(
    is >> c;
    s = String(c);
    delete[] c;
    
    return is;
}










