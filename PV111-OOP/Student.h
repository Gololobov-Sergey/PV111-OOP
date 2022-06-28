#pragma once
#include<iostream>

using namespace std;

class Student
{

	char* name;
	int age;

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
		cout << "Destructor" << endl;
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
	cout << "Name: " << name << ", Age: " << age << endl;
}