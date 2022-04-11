#include "Pair.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

Pair::Pair()
{
	setFirst(0);
	setSecond(0);
}
Pair::Pair(const int first, const int second)
{
	setFirst(first);
	setSecond(second);
}
Pair::Pair(const Pair& m)
{
	setFirst(m.first);
	setSecond(m.second);
}
Pair& Pair::operator ++ () {
	++first;
	return *this;
}
Pair& Pair::operator -- () {
	--first;
	return *this;
}
Pair Pair::operator ++ (int)
{
	Pair s(*this);
	first++;
	return s;
}
Pair Pair::operator -- (int)
{
	Pair s(*this);
	first--;
	return s;
}