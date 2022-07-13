#pragma once
#include<iostream>

using namespace std;

int RGB_to_int(int r, int g, int b)
{
	int color = 0;
	color |= r;
	color <<= 8;
	color |= g;
	color <<= 8;
	color |= b;
	return color;
}

void int_to_RGB(int color, int& r, int& g, int& b)
{
	b = color & 255;
	color >>= 8;
	g = color & 255;
	color >>= 8;
	r = color;
}

class Apple
{
	int diametr;
	int color;

public:
	Apple(int d, int r, int g, int b) :diametr(d), color(0)
	{
		color = RGB_to_int(r, g, b);
	}

	friend ostream& operator<<(ostream& out, const Apple& app);

	Apple operator+(const Apple& app);
};

Apple Apple::operator+(const Apple& app)
{
	int d = this->diametr + app.diametr;
	int r, g, b, r1, g1, b1;
	int_to_RGB(this->color, r, g, b);
	int_to_RGB(app.color, r1, g1, b1);
	return Apple(d, (r + r1) / 2, (g + g1) / 2, (b + b1) / 2);
}

ostream& operator<<(ostream& out, const Apple& app)
{
	int r, g, b;
	int_to_RGB(app.color, r, g, b);
	out << "Diam: " << app.diametr << ", Color: RGB(" << r << ", " << g << ", " << b << "), #" << app.color << endl;
	return out;
}