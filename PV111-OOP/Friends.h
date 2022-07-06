#pragma once
#include<iostream>

using namespace std;

class Humidity;

class Temperature
{
	int temp;

	void setTemp(int t)
	{
		temp = t;
	}

public:
	Temperature(int t = 0) : temp(t) {}

	friend class Humidity;

	void foo(Humidity& h);

	void foo2(Humidity& h);

	

	friend void WetherInformer(Temperature& t, Humidity& h);
};


class Humidity
{
	int humid;

public:
	Humidity(int h = 0) : humid(h) {}

	void print(Temperature& t)
	{
		cout << t.temp << endl;
		t.setTemp(25);
	}

	friend void Temperature::foo(Humidity& h);

	friend void WetherInformer(Temperature& t, Humidity& h);
};

void Temperature::foo(Humidity& h)
{
	h.humid = 1000;
}

void Temperature::foo2(Humidity& h)
{
	
}

void WetherInformer(Temperature& t, Humidity& h)
{
	cout << "Temp: " << t.temp << (char)248 << "C" << endl;
	cout << "Humi: " << h.humid << "mm.Hg" << endl;
}

