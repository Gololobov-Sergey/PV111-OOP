#pragma once
#include<iostream>
#include"../Library/Functions.h"

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
	void clear();
	static int getCount();
	String operator*(int n);

	//// TODO
	/*String operator+(String& str);
	String operator+(const char* str);
	String operator-(String& subStr);
	String operator-(const char* subStr);
	void operator+=(String& str);
	void operator+=(const char* str);
	char& operator[](int ind);
	void operator()(String& str);
	void operator()(const char* str);
	String& operator=(const String& str);*/
	//bool operator<=>(String& str);
	//bool operator<=>(const char* str)
	//operator char* ();

	friend ostream& operator<<(ostream& out, const String& str);
	friend istream& operator>>(istream& in, String& str);


	String operator*(const String& str);
};

String operator* (int n, String str);