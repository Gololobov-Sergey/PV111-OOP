#pragma once
#include<iostream>


using namespace std;


class Point
{
	int x;
	int y;
	const int z = 99;
	static int count;
public:
	
	Point() : Point(0, 0){}
	Point(int x, int y, int z = 0) : x{ x }, y{ y }, z{ z } { count++; }
	~Point()
	{
		count--;
	}
	int getZ() const { return z; }
	static int getCount() { return count; }
	void print() const;
	void addVector(int x, int y)
	{
		this->x += x;
		this->y += y;
	}
};


int Point::count = 0;

void Point::print() const
{
	cout << "(X = " << x << ", Y = " << y << ", Z = " << z << ")" << endl;
}