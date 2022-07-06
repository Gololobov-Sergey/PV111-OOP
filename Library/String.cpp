#include "String.h"

int String::count = 0;

String::String(int size)
{
	this->size = size;
	this->str = new char[size + 1];
	this->str[0] = '\0';
	this->count++;
}

String::String(const char* st)
{
	this->size = strlen(st);
	this->str = new char[this->size + 1];
	strcpy_s(this->str, this->size + 1, st);
	this->count++;
}

String::String(const String& st)
{
	this->size = st.size;
	this->str = new char[this->size + 1];
	strcpy_s(this->str, this->size + 1, st.str);
	this->count++;
}

String::~String()
{
	delete str;
	this->count--;
}

void String::print()
{
	cout << this->str << endl;
}

int String::getCount()
{
	return 0;
}
