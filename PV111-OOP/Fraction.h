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
		int resNom = nom * f1.den + den * f1.nom;
		int resDenom = den * f1.den;
		return Fraction(resNom, resDenom);
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

	bool operator<(Fraction f)
	{
		return (float)nom / den < (float)f.nom / f.den;
	}

	operator float()
	{
		return (float)nom / den;
	}

	operator int()
	{
		return nom / den;
	}

	//C++20
	/*auto operator<=>(Fraction f)
	{
		return (float)nom / den <=> (float)f.nom / f.den;
	}*/
};

//Fraction operator+(Fraction f1, Fraction f2)
//{
//
//}
