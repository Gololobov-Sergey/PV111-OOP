#include "String.h"

int String::count = 0;

String::String(int size)
{
	this->size = size;
	str = new char[size + 1];
	str[0] = '\0';
}

String::String(const char* st)
{

}

String::String(const String& st)
{

}

String::~String()
{

}

void String::print()
{
}

int String::getCount()
{
	return 0;
}
