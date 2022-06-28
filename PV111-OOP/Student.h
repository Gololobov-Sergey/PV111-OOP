#pragma once
#include<iostream>

using namespace std;

class Student
{

	char name[10];
	int age;

public:
	Student()
	{
		cout << "Constructor" << endl;
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
		strcpy_s(name, 10, n);
	}

	char* getName()
	{
		return name;
	}

	void print();

};


void Student::print()
{
	cout << "Name: " << name << ", Age: " << age << endl;
}