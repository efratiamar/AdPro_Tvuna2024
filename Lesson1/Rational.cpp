#include "Rational.h"

#include <iostream>
using namespace std;

void Rational::print()
{
	cout << mone << "/" << mechane << endl;
};

float Rational::reduce(float r)
{
	return (mone / r) / (mechane / r);
};

void Rational::reduce2()
{
	mone = mone / 2;
	mechane = mechane / 2;
}

void Rational::mult(Rational right)
{
	cout << mone * right.getMone() / mechane * right.getMechane() << endl;
}

bool Rational::equal(Rational right)
{
	if (mone == right.getMone() && mechane == right.getMechane())
		return true;
	else
		return false;

	return
		(mone == right.getMone() && mechane == right.getMechane());

}

void Rational::makeEquals(Rational& right)
{
	right.setMone(mone);
	right.setMechane(mechane);
}


