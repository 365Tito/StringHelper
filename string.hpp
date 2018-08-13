#pragma once
#include <iostream>
//todo namespace
class String
{

public:
	char* text;
	int length;

public:
	String();
	String(int length);
	String(char* text);
	~String();
	String copy(String s);
	String concaternate(String s);
	String substring(int start,int end);
	String substring(int start);
	String* split(String delimiter);
	String* split(char delimiter);
	String ltrim();
	String rtrim();
	String trim();
	String format(); //todo: determine implementation
	int compare_string(); //todo: determine return type
	char* to_char_array();
	String remove(String s);
	String cutoff_left(int n);
	String cutoff_right(int n);
	String to_upper();
	String to_lower();
	bool is_numeric();
	bool is_alpha();
	bool is_special();
	bool is_alphanumeric();
	bool is_whitespace();
	bool contains(String s);
	bool contains(char c);
	char char_at(int index);
	int index_of(String s);
	int index_of(char c);
	int last_index_of(String s);
	int last_index_of(char c);
	int* all_indexes_of(String s);
	int* all_indexes_of(char c);
	String reverse();
	
    String operator +(String &s);
	String operator -(String &s);
	String operator *(String &s);
	friend std::ostream& operator <<(std::ostream& os , String &s); //todo : determine implementation and arguments
	friend std::istream& operator >>(std::istream& os , String &s); //todo : determine implementation and arguments
	bool operator ==(String &s); 
	bool operator !=(String &s);
	bool operator <(String &s);
	bool operator <=(String &s);
	bool operator >(String &s);
	bool operator >=(String &s);
	
};