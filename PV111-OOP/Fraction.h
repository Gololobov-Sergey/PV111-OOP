#pragma once

class Fraction
{
	int nom, den;

public:
	Fraction(int n, int d) :nom(n), den(d) {}

	void print()
	{
		cout << nom << "/" << den << endl;
	}

	Fraction Sum(Fraction f)
	{
		return Fraction(0, 1);
	}

	Fraction operator+(Fraction f1)
	{
		return Fraction(0, 1);
	}

	Fraction operator-()
	{
		return Fraction(-nom, den);
	}

	Fraction& operator++() // prefix
	{
		nom += den;
		return *this;
	}

	Fraction operator++(int) // postfix
	{
		Fraction temp(nom, den);
		nom += den;
		return temp;
	}
};

//Fraction operator+(Fraction f1, Fraction f2)
//{
//
//}
