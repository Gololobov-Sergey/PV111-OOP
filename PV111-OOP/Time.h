#pragma once
#include<iostream>


using namespace std;

class Time
{
	int h, m, s;

public:
	Time() : Time(0)
	{
		cout << "Constr 0" << endl;
	}
	Time(int s) : Time(0, s) 
	{
		cout << "Constr 1" << endl;
	}
	Time(int m, int s) : Time(0, m, s) 
	{
		cout << "Constr 2" << endl;
	}
	Time(int h, int m, int s) : h(h), m(m), s(s)
	{
		cout << "Constr 3" << endl;
	}

	
};
