#include "Rational.h"

int Rational::getMone() const
{
	//mone = 5; //error
	return mone;
}
int Rational::getMechane() const
{
	return mechane;
}

void Rational::mult1(const Rational& num)
{
	mone = mone * num.mone;
	mechane = mechane * num.mechane;
}

void Rational::mult2(const Rational& num) const
{
	cout << mone * num.mone << "/" << mechane * num.mechane;
}
