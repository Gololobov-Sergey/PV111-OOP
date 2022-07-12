#pragma once

enum TYPE
{
	_NULL, _INT, _DOUBLE, _STRING
};

class var
{
	TYPE type;
	void* value;

public:
	var();
	var(int i);
	var(double d);
	var(const char* s);
	friend ostream& operator<<(ostream& out, const var& str);
};

var::var()
{
	value = nullptr;
	type = TYPE::_NULL;
}

var::var(int i)
{
	delete value;
	value = new int;
	*((int*)value) = i;
	type = TYPE::_INT;
}

var::var(double d)
{
	delete value;
	value = new double;
	*((double*)value) = d;
	type = TYPE::_DOUBLE;
}

var::var(const char* s)
{
	delete value;
	value = new char[strlen(s) + 1];
	strcpy_s((char*)value, strlen(s) + 1, s);
	type = TYPE::_STRING;
}

ostream& operator<<(ostream& out, const var& str)
{
	switch (str.type)
	{
	case _INT:
		out << *((int*)str.value);
		break;
	case _DOUBLE:
		out << *((double*)str.value);
		break;
	case _STRING:
		out << (char*)str.value;
		break;
	default:
		break;
	}
	return out;
}