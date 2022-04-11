#pragma once
#include "Pair.h"
#include <string>
#include <sstream>
using namespace std;
class Fraction
{
	Pair pair;
public:
	Fraction();
	Fraction(const int, const int);
	Fraction(const Fraction& m);

	friend bool Less(Fraction x, Fraction y);
	friend bool NLess(Fraction x, Fraction y);
	friend bool Great(Fraction x, Fraction y);
	friend bool NGreat(Fraction x, Fraction y);
	friend bool Equal(Fraction x, Fraction y);
	friend bool NEqual(Fraction x, Fraction y);

	Fraction& operator = (Fraction& s);
	friend ostream& operator << (ostream&, Fraction&);
	friend istream& operator >> (istream&, Fraction&);

	operator string ();
};

