#pragma once
#include<iostream>

using namespace std;


class String
{
	char* str;
	int size;
	static int count;

public:
	String() : String(80) {}
	explicit String(int size);
	String(const char* st);
	String(const String& st);
	~String();

	void set(const char* st);
	void set();
	void print();
	char* get();
	int length();
	static int getCount();
};



