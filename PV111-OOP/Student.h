#pragma once
#include<iostream>
#include"../Library/Functions.h"

using namespace std;

class Student
{

	char* name = nullptr;
	int age = 0;
	int* mark = nullptr;
	int sizeMark = 0;

public:
	Student() 
	{
		setName("No name");
		setAge(0);
	}

	Student(const char* n, int a)
	{
		setName(n);
		setAge(a);
	}

	~Student()
	{
		delete name;
		delete[] mark;
		cout << "Destructor" << endl;
	}

	void addMark(int m)
	{
		if (m < 1 || m > 12)
			return;
		addElemArray(mark, sizeMark, m);
	}

	void setAge(int a)
	{
		if (a > 100 || a < 0)
		{
			age = 0;
			return;
		}
		age = a;
	}

	int getAge()
	{
		return age;
	}

	void setName(const char* n)
	{
		int len = strlen(n) + 1;
		name = new char[len];
		strcpy_s(name, len, n);
	}

	char* getName()
	{
		return name;
	}

	void print();

};


void Student::print()
{
	cout << "Name: " << name << ", Age: " << age << ", Mark: ";
	printArray(mark, sizeMark);
}